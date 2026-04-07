const std = @import("std");

var numbers_left: u32 = undefined;

fn eventuallyErrorSequence() !u32 {
    return if (numbers_left == 0) error.ReachedZero else blk: {
        numbers_left -= 1;
        break :blk numbers_left;
    };
}

test "while error union capture" {
    var sum: u32 = 0;
    numbers_left = 3;
    while (eventuallyErrorSequence()) |value| {
        sum += value;
    } else |err| {
        try std.testing.expect(err == error.ReachedZero);
    }
}
