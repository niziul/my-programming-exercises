/*
    [ description of the first fixation exercise ] :
        - Write a function that normally takes one argument,
        the address of a string, and displays that string once.
        however, if a second argument, of boolean type, is supplied
        and has a true value, the function must display the string a
        number of times equal to the number of calls to the function.

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] void display_string(const char*, bool = false);
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            lab-29
            lab-29
            lab-29

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] void display_string(const char*, bool = true);
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            lab-29
            lab-29
            lab-29

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

void display_string(const char*, bool = false);

int main()
{
    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] void display_string(const char*, bool = false);" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    display_string("lab-29");
    display_string("lab-29");
    display_string("lab-29");

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] void display_string(const char*, bool = true);" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    display_string("lab-29", true);

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}

void display_string(const char* c_string, bool enable)
{
    auto static calls
        = int_fast16_t{};

    if (enable)
    {
        for (size_t i = 0; i < calls; i++)
        {
            cout << c_string << endl;
        }
    }
    else
    {
        cout << c_string << endl;
    }

    calls++;
}
