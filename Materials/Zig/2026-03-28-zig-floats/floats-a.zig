const std = @import("std");

test "float widening" {
    const a: f16 = 0;
    const b: f32 = a;
    const c: f128 = b;

    try std.testing.expect(c == @as(f128, a));
}
