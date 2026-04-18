const expect = @import("std").testing.expect;
const meta = @import("std").meta;

test "vectors coerce" {
    const arr: [4]f32 = @Vector(4, f32){
        1,
        2,
        3,
        4,
    };

    _ = arr;
}
