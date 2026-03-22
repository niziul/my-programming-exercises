const expect = @import("std").testing.expect;

test "if statement" {
    const a = true;
    const b = true;

    var x: u16 = 0;
    var y: u16 = 0;

    if (a != b) {
        x += 1;
    } else {
        y += 1;
    }

    try expect(x > y);
}

test "if statement expression" {
    const a = true;
    var x: u16 = 0;

    x += if (a) 1 else 2;

    try expect(x == 1);
}
