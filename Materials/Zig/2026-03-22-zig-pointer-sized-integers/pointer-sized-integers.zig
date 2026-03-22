const std = @import("std");

test "usize" {
    try std.testing.expect(@sizeOf(usize) == @sizeOf(*u8));
    try std.testing.expect(@sizeOf(isize) == @sizeOf(*u8));
}
