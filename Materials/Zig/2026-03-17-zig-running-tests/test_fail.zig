const std = @import("std");
const expect = std.testing.expect;

test "always fails" {
    try expect(false);
}
