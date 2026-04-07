const std = @import("std");

test "error union if" {
    const ent_num: error{UnknownEntity}!u32 = 5;

    if (ent_num) |entity| {
        try std.testing.expect(@TypeOf(entity) == u32);
        try std.testing.expect(entity == 5);
    } else |err| {
        _ = err catch {};
        unreachable;
    }
}
