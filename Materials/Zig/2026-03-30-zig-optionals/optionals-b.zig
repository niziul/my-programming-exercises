const std = @import("std");

test "orelse" {
    const a: ?f32 = null;
    const fallback_value: f32 = 0;
    const b = a orelse fallback_value;

    try std.testing.expect(b == 0);
    try std.testing.expect(@TypeOf(b) == f32);
}
