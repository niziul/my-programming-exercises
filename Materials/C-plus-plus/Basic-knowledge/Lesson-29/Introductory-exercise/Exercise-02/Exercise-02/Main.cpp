/*
    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] string size
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            - '6';

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] number size
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            - '8';

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#include <iostream>
#include <cstring>

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

unsigned size(const char*);
unsigned size(unsigned);

int main()
{
    auto trip
        = "Hawaii";

    auto value
        = (unsigned)12345678;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] string size" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    cout << "- \'" << size(trip) << "\';" << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] number size" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    cout << "- \'" << size(value) << "\';" << endl;

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}

unsigned size(const char* str)
{
    auto _
        = unsigned{};

    while (*(str + _))
    {
        _++;
    }

    return _;
}

unsigned size(unsigned num)
{
    auto _
        = (unsigned)1;

    while (num /= 10)
    {
        _++;
    }

    return _;
}
