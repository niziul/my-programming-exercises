const std = @import("std");

fn doubleAllManypointer(buffer: [*]u8, byte_count: usize) void {
    var i: usize = 0;
    while (i < byte_count) : (i += 1) buffer[i] *= 2;
}

test "many-item pointers" {
    var buffer: [100]u8 = [_]u8{1} ** 100;
    const buffer_ptr: *[100]u8 = &buffer;

    const buffer_many_ptr: [*]u8 = buffer_ptr;
    doubleAllManypointer(buffer_many_ptr, buffer.len);
    for (buffer) |byte| try std.testing.expect(byte == 2);

    const first_elem_ptr: *u8 = &buffer_many_ptr[0];
    const first_elem_ptr_2: *u8 = @ptrCast(buffer_many_ptr);

    try std.testing.expect(first_elem_ptr == first_elem_ptr_2);
}
