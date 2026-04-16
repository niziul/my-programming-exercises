const Window = opaque {};
const Button = opaque {};

extern fn show_window(*Window) callconv(.c) void;

test "opaque" {
    const main_window: *Window = undefined;
    show_window(main_window);

    const ok_button: *Button = undefined;
    show_window(ok_button);
}
