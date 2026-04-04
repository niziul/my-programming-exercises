const std = @import("std");

fn Matrix(
    comptime T: type,
    comptime width: comptime_int,
    comptime height: comptime_int,
) type {
    return [height][width]T;
}

test "returning a type" {
    try std.testing.expect(
        Matrix(
            f32,
            4,
            4,
        ) == [4][4]f32,
    );
}
