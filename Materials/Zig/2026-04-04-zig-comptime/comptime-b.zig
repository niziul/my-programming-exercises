const std = @import("std");

test "comptime_int" {
    const a = 12;
    const b = a + 10;

    const c: u4 = a;
    const d: f32 = b;

    try std.testing.expect(c == 12);
    try std.testing.expect(d == 22);
}
