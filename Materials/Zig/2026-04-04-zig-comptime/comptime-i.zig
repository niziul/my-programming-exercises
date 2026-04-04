const std = @import("std");

fn plusOne(x: anytype) @TypeOf(x) {
    return x + 1;
}

test "inferred function parameter" {
    try std.testing.expect(plusOne(@as(u32, 1)) == 2);
}
