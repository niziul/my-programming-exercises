const std = @import("std");

fn asciiToUpper(x: u8) u8 {
    return switch (x) {
        'a'...'z' => x + 'A' - 'a',
        'A'...'Z' => x,
        else => unreachable,
    };
}

test "unreachable switch" {
    try std.testing.expect(asciiToUpper('a') == 'A');
    try std.testing.expect(asciiToUpper('A') == 'A');
}
