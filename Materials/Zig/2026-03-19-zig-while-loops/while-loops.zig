const std = @import("std");

test "while" {
    var x: u16 = 2;
    var y: u16 = 16;

    var amount_of_pass_in_x: u8 = undefined;
    var amount_of_pass_in_y: u8 = undefined;

    while (x <= 128) {
        x *= 2;
        amount_of_pass_in_x += 1;
    }

    while (y <= 128) {
        y *= 2;
        amount_of_pass_in_y += 1;
    }

    std.debug.print(
        "amount_of_pass_in_x: {d}\n",
        .{amount_of_pass_in_x},
    );
    std.debug.print(
        "x: {d}\n",
        .{x},
    );
    std.debug.print(
        "amount_of_pass_in_y: {d}\n",
        .{amount_of_pass_in_y},
    );
    std.debug.print(
        "y: {d}\n",
        .{y},
    );

    try std.testing.expect(x == 256 and y == 256);
}

test "while with continue expression" {
    var sum: u8 = 0;
    var y: u8 = 1;

    while (y <= 10) : (y += 1) {
        sum += y;
    }

    try std.testing.expect(sum == 55);
}

test "while with continue" {
    var sum: u8 = 0;
    var y: u8 = 0;
    while (y <= 3) : (y += 1) {
        if (y == 2) continue;
        sum += 1;
    }

    try std.testing.expect(sum == 3);
}

test "while with break" {
    var sum: u8 = 0;
    var y: u8 = 0;
    while (y <= 3) : (y += 1) {
        if (y == 2) break;
        sum += 1;
    }

    try std.testing.expect(sum == 2);
}
