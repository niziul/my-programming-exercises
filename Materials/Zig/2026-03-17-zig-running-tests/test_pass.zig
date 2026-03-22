const std = @import("std");
const expect = std.testing.expect;

test "always succeds" {
    try expect(true);
}
