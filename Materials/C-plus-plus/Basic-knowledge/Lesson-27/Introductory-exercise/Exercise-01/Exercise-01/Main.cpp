/*
    [ output ]
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            ] valueA         : '25'
            ] valueB         : '144'
            ] valueC         : '13'

            ] valueC squared : '169'
            ] valueC         : '14'

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

inline double square(double valueX)
{
    return valueX * valueX;
}

int main()
{
    auto valueA
        = double{};

    auto valueB
        = double{};

    auto valueC
        = 13.0;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    valueA
        = square(5.0);

    valueB
        = square(4.5
                 +
                 7.5);
    
    cout << "] valueA         : \'" << valueA << "\'" << endl;
    cout << "] valueB         : \'" << valueB << "\'" << endl;
    cout << "] valueC         : \'" << valueC << "\'" << endl;

    cout << endl;
    
    cout << "] valueC squared : \'" << square(valueC++) << "\'" << endl;
    cout << "] valueC         : \'" << valueC << "\'" << endl;

    cout << endl;
    
    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}