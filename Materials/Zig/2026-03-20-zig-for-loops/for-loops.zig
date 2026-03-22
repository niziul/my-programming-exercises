const std = @import("std");

test "for" {
    const temp = [_]u8{
        'a',
        'b',
        'c',
        'd',
    };

    for (temp, 0..) |character, index| {
        std.debug.print("{d}:", .{index});
        std.debug.print("{c}", .{character});
    }

    std.debug.print("\n", .{});

    for (temp) |character| {
        _ = character;
    }

    for (temp, 0..) |_, index| {
        _ = index;
    }

    for (temp) |_| {}
}
