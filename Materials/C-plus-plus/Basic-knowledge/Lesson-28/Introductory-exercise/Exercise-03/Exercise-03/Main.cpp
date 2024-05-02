/*
    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            ; rats    = '101';
            ; rodents = '101';

            -

            ; rats    = '102'
            ; rodents = '102'

            ; rats address    = '0000004E9E1FFC24'
            ; rodents address = '0000004E9E1FFC24'

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

int main()
{
    auto rats
        = 101;

    auto& rodents
        = rats;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "; rats    = \'" << rats << "\';" << endl;
    cout << "; rodents = \'" << rodents << "\';" << endl;

    cout << endl;
    cout << "-" << endl;
    cout << endl;

    rodents++;

    cout << "; rats    = \'" << rats << "\'" << endl;
    cout << "; rodents = \'" << rodents << "\'" << endl;

    cout << endl;

    cout << "; rats address    = \'" << &rats << "\'" << endl;
    cout << "; rodents address = \'" << &rodents << "\'" << endl;

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}