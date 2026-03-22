const std = @import("std");

test "unreachable" {
    const x: i32 = 1;
    const y: u32 = if (x == 2) 5 else unreachable;

    _ = y;
}
