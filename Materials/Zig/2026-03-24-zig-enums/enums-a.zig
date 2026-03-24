const std = @import("std");

const Direction = enum {
    north,
    south,
    east,
    west,
};

const EngineAmount = enum(u8) {
    Single = 1,
    Twin,
    Tri,
    Four,
    Six = 6,
    Eighth = 8,
    Twelve = 12,
};

test "enum ordinal value" {
    try std.testing.expect(@intFromEnum(EngineAmount.Single) == 1);
    try std.testing.expect(@intFromEnum(EngineAmount.Twin) == 2);
    try std.testing.expect(@intFromEnum(EngineAmount.Tri) == 3);
    try std.testing.expect(@intFromEnum(EngineAmount.Six) == 6);
}
