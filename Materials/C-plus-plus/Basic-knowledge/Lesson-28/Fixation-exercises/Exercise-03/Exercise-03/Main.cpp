/*
    [ description of the third fixation exercise ] :
        - Build a calculate function that uses references in
        its parameters to return more than one value to the main
        program. the function must receive a pair of values, defined
        by the struct below, and two integer values that must be modified
        to store, respectively, the sum and multiplication of the values in
        the pair. use const for parameters that will not be modified within
        the the function.

        ]
            struct pair
            {
                int x;
                int y;
            }

            enter a pair of values: 4 5
            
            sum: 9
            multiplication: 20
        ]

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            ] enter a pair of values below
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            x: 4
            y: 5

            -

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] result
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            ~ sum            : '9';
            ~ multiplication : '20';

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

struct st_pair
{
    int_fast16_t x;
    int_fast16_t y;
};

void calculate(const st_pair&, int_fast16_t&, int_fast16_t&);

int main()
{
    auto pair
        = st_pair{};

    auto sum
        = int_fast16_t{};

    auto multiplication
        = int_fast16_t{};

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "] enter a pair of values below" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "x: ";
    cin >> pair.x;
    cout << "y: ";
    cin >> pair.y;

    cout << endl;
    cout << "-" << endl;
    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] result" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    calculate(pair, sum, multiplication);

    cout << endl;
    
    cout << "~ sum            : \'" << sum << "\';" << endl;
    cout << "~ multiplication : \'" << multiplication << "\';" << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}

void calculate(const st_pair& pair, int_fast16_t& sum, int_fast16_t& multiplication)
{
    sum
        = pair.x + pair.y;

    multiplication
        = pair.x * pair.y;
}
