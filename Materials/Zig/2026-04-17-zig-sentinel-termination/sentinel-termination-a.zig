const expect = @import("std").testing.expect;

test "sentinel termination" {
    const terminated = [3:0]u8{
        3,
        2,
        1,
    };

    try expect(terminated.len == 3);

    try expect(@as(*const [4]u8, @ptrCast(&terminated))[0] == 3);
    try expect(@as(*const [4]u8, @ptrCast(&terminated))[1] == 2);
    try expect(@as(*const [4]u8, @ptrCast(&terminated))[2] == 1);
    try expect(@as(*const [4]u8, @ptrCast(&terminated))[3] == 0);
}
