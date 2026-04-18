const expect = @import("std").testing.expect;

test "string literal" {
    try expect(@TypeOf("radare2") == *const [7:0]u8);
}
