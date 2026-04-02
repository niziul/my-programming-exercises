const std = @import("std");

test "orelse unreachable" {
    const a: ?f32 = 5;
    const b = a orelse unreachable;
    const c = a.?;

    try std.testing.expect(b == c);
    try std.testing.expect(@TypeOf(c) == f32);
}
