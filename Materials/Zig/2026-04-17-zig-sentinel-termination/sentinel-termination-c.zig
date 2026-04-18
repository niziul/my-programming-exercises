const expect = @import("std").testing.expect;

test "C string" {
    const c_string: [*:0]const u8 = "radare2";

    var array: [7]u8 = undefined;

    var i: usize = 0;
    while (c_string[i] != 0) : (i += 1) {
        array[i] = c_string[i];
    }
}
