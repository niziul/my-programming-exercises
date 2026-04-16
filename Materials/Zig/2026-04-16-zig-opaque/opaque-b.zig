const Window = opaque {
    fn show(self: *Window) void {
        show_window(self);
    }
};

extern fn show_window(*Window) callconv(.c) void;

test "opaque with declarations" {
    var main_window: *Window = undefined;

    main_window.*.show();
}
