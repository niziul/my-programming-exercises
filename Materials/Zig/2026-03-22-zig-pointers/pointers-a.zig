const std = @import("std");

fn increment(num: *u8) void {
    num.* += 1;
}

test "pointers" {
    var x: u8 = 1;
    increment(&x);

    try std.testing.expect(x == 2);
}

