const std = @import("std");

test "branching on types" {
    const a = 5;
    const b: if (a < 10) f32 else i32 = 5;

    try std.testing.expect(b == 5);
    try std.testing.expect(@TypeOf(b) == f32);
}
