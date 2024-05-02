/*
    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            ; rats            = '101';
            ; rodents         = '101';
            ; rats address    = '000000069416F744'
            ; rodents address = '000000069416F744'

            -

            ; rabbits         = '105'
            ; rats            = '105'
            ; rodents         = '105'
            ; rabbits address = '000000069416F764'
            ; rodents address = '000000069416F744'

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

    auto rabbits
        = 105;

    auto& rodents
        = rats;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "; rats            = \'" << rats << "\';" << endl;
    cout << "; rodents         = \'" << rodents << "\';" << endl;
    cout << "; rats address    = \'" << &rats << "\'" << endl;
    cout << "; rodents address = \'" << &rodents << "\'" << endl;

    cout << endl;
    cout << "-" << endl;
    cout << endl;

    rodents++;

    rodents
        = rabbits; // you can't redefine a reference.

    cout << "; rabbits         = \'" << rabbits << "\'" << endl;
    cout << "; rats            = \'" << rats << "\'" << endl;
    cout << "; rodents         = \'" << rodents << "\'" << endl;
    cout << "; rabbits address = \'" << &rabbits << "\'" << endl;
    cout << "; rodents address = \'" << &rodents << "\'" << endl;

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}