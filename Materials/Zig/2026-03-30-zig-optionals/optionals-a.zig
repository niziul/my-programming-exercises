const std = @import("std");

test "optional" {
    var found_index: ?usize = null;

    const data = [_]i32{
        1,
        2,
        3,
        4,
        5,
        6,
        7,
        8,
        12,
    };

    for (data, 0..) |v, i| {
        if (v == 10) found_index = i;
    }

    try std.testing.expect(found_index == null);
}

