const std = @import("std");

const Tag = enum {
    a,
    b,
    c,
};

const Tagged = union(Tag) {
    a: u8,
    b: f32,
    c: bool,
};

const Tagged2 = union(enum) {
    a: u8,
    b: f32,
    c: bool,
    none,
};

test "switch on tagged union" {
    var value = Tagged{
        .b = 1.5,
    };

    switch (value) {
        .a => |*byte| byte.* += 1,
        .b => |*float| float.* *= 2,
        .c => |*b| b.* = !b.*,
    }
    try std.testing.expect(value.b == 3);
}
