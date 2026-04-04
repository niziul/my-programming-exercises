const std = @import("std");

fn GetBiggerInt(comptime T: type) type {
    return @Type(.{
        .int = .{
            .bits = @typeInfo(T).int.bits + 1,
            .signedness = @typeInfo(T).int.signedness,
        },
    });
}

test "@Type" {
    try std.testing.expect(GetBiggerInt(u8) == u9);
    try std.testing.expect(GetBiggerInt(i31) == i32);
}
