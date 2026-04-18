const expect = @import("std").testing.expect;
const print = @import("std").debug.print;

test "sentinel terminated slicing" {
    var x = [_:0]u8{69} ** 3;
    const y = x[0..3 :0];

    print("{any}\n", .{y});
}
