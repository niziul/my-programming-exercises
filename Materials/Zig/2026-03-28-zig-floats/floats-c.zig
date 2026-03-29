const std = @import("std");

test "int-float conversion" {
    const a: i32 = 0;
    const b = @as(f32, @floatFromInt(a));
    const c = @as(i32, @intFromFloat(b));

    try std.testing.expect(c == a);
}
