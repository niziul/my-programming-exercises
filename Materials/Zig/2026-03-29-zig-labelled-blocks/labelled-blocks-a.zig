const std = @import("std");

test "labelled blocks" {
    const count = blk: {
        var sum: u32 = 0;
        var i: u32 = 0;

        while (i < 10) : (i += 1) sum += i;
        break :blk sum;
    };

    try std.testing.expect(count == 45);
    try std.testing.expect(@TypeOf(count) == u32);
}
