const std = @import("std");

test "integer widening" {
    const a: u8 = 250;
    const b: u16 = a;
    const c: u32 = b;

    try std.testing.expect(c == a);
}
