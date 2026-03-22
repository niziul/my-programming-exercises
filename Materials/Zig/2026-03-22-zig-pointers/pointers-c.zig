const std = @import("std");

test "const pointers" {
    const x: u8 = 1;
    var y = &x;
    y.* += 1;
}
