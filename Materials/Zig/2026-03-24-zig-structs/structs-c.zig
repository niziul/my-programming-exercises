const std = @import("std");

const Stuff = struct {
    x: i32,
    y: i32,

    fn swap(self: *Stuff) void {
        const tmp = self.x;
        self.x = self.y;
        self.y = tmp;
    }
};

test "automatic dereference" {
    var thing = Stuff{
        .x = 10,
        .y = 50,
    };
    thing.swap();

    try std.testing.expect(thing.x == 50);
    try std.testing.expect(thing.y == 10);
}

