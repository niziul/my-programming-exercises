const std = @import("std");

const Result = union {
    int: i64,
    float: f64,
    bool: bool,
};

test "simple union" {
    var result = Result{
        .int = 1234,
    };

    result.float = 12.34;
}
