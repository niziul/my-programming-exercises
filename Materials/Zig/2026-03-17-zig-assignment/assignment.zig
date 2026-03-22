const std = @import("std");

const constant: i32 = 5;
var variable: u32 = 5000;

const inferred_constant = @as(i32, 5);
const inferred_variable = @as(u32, 5000);

const a: i32 = undefined;
const b: u32 = undefined;

pub fn main() !void {
    std.debug.print("inferred_constant: {d}\n", .{inferred_variable});
}
