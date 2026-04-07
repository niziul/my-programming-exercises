const std = @import("std");

test "for capture" {
    const x = [_]i8{
        1,
        5,
        120,
        -5,
    };

    for (x) |v| {
        try std.testing.expect(@TypeOf(v) == i8);
    }
}
