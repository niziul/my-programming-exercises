const std = @import("std");

test "optional-if" {
    const maybe_num: ?usize = 10;

    if (maybe_num) |n| {
        try std.testing.expect(@TypeOf(n) == usize);
        try std.testing.expect(n == 10);
    } else {
        unreachable;
    }
}
