const std = @import("std");

var numbers_left: u32 = 4;

fn eventuallyNullSequence() ?u32 {
    if (numbers_left == 0) {
        return null;
    }
    numbers_left -= 1;

    return numbers_left;
}

test "while null capture" {
    var sum: u32 = 0;

    while (eventuallyNullSequence()) |value| {
        sum += value;
    }

    try std.testing.expect(sum == 6);
}
