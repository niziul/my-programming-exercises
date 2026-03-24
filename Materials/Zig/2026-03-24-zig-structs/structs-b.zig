const std = @import("std");

const Vector4 = struct {
    x: f32 = 0,
    y: f32 = 0,
    z: f32 = 0,
    w: f32 = 0,
};

test "struct defaults" {
    const my_vector4: Vector4 = .{
        .x = 25,
        .y = 25,
    };

    _ = my_vector4;
}

