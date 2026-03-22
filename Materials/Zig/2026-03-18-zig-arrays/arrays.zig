const std = @import("std");

pub fn main() !void {
    const a = [5]u8{
        'h',
        'e',
        'l',
        'l',
        'o',
    };
    const b = [_]u8{
        'z',
        'i',
        'g',
    };

    std.debug.print("a: '{s}'\n", .{a});
    std.debug.print("b: '{s}'\n", .{b});
    std.debug.print("{s} {s}\n", .{ a, b });
    std.debug.print("array 'a' length: {d}\n", .{a.len});
    std.debug.print("array 'b' length: {d}\n", .{b.len});
}
