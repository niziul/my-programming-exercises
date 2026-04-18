const expect = @import("std").testing.expect;
const meta = @import("std").meta;

test "vector add" {
    const x: @Vector(4, f32) = .{
        1,
        -10,
        20,
        -1,
    };
    const y: @Vector(4, f32) = .{
        2,
        10,
        0,
        1,
    };

    const z = x + y;

    try expect(meta.eql(
        z,
        @Vector(4, f32){
            3,
            0,
            20,
            0,
        },
    ));
}
