const std = @import("std");

test "while optional" {
    const sequence = [_]?u8{
        0xFF,
        0xCC,
        0x00,
        null,
    };

    var i: usize = 0;

    while (sequence[i]) |num| : (i += 1) {
        try std.testing.expect(@TypeOf(num) == u8);
    }

    try std.testing.expect(i == 3);
    try std.testing.expect(sequence[i] == null);
}
