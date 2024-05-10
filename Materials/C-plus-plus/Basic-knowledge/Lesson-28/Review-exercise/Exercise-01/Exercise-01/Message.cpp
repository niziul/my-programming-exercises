extern void (*print)(const char[]);

void message()
{
    (*print)("ending program!");
}