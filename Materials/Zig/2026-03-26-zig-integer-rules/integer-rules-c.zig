const std = @import("std");

test "@intCast" {
    const x: u64 = 200;
    const y = @as(u8, @intCast(x));

    try std.testing.expect(@TypeOf(y) == u8);
}
