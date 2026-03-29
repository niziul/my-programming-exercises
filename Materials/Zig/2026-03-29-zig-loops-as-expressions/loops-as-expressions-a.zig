const std = @import("std");

fn rangeHasNumber(begin: usize, end: usize, number: usize) bool {
    var i = begin;

    return while (i < end) : (i += 1) {
        if (i == number) {
            break true;
        }
    } else false;
}

test "while loop expression" {
    try std.testing.expect(rangeHasNumber(0, 10, 3));
}
