const std = @import("std");

const Vector3 = struct {
    x: f32,
    y: f32,
    z: f32,
};

test "struct usage" {
    const my_vector: Vector3 = .{
        .x = 0,
        .y = 10,
        .z = 20,
    };
    _ = my_vector;
}

test "missing struct field" {
    const my_vector: Vector3 = .{
        .x = 0,
        .z = 5,
    };
    _ = my_vector;
}
