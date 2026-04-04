const std = @import("std");

test "++" {
    const x: [4]u8 = undefined;
    const y = x[0..];

    const a: [6]u8 = undefined;
    const b = a[0..];

    const all = y ++ b;

    try std.testing.expect(all.len == 10);
}
