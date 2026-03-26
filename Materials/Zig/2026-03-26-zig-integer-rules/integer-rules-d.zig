const std = @import("std");

test "well defined overflow" {
    var a: u8 = 255;
    a +%= 1;
    try std.testing.expect(a == 0);
}
