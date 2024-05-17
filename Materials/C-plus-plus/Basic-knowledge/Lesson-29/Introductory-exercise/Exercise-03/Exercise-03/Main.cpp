/*
    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] default values
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            {
                    value_i: '10';
                    value_j: '20';
            }

            {
                    value_x: '24.5';
                    value_y: '81.7';
            }

            -

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] swap values
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            {
                    value_i: '20';
                    value_j: '10';
            }

            {
                    value_x: '81.7';
                    value_y: '24.5';
            }

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

template <typename T>
void swap_values(T&, T&);

int main()
{
    auto value_i
        = 10;

    auto value_j
        = 20;

    auto value_x
        = 24.5;

    auto value_y
        = 81.7;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] default values" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    cout << "{" << endl;
    cout << "\tvalue_i: \'" << value_i << "\';" << endl;
    cout << "\tvalue_j: \'" << value_j << "\';" << endl;
    cout << "}" << endl;

    cout << endl;
    
    cout << "{" << endl;
    cout << "\tvalue_x: \'" << value_x << "\';" << endl;
    cout << "\tvalue_y: \'" << value_y << "\';" << endl;
    cout << "}" << endl;

    cout << endl;
    cout << "-" << endl;
    cout << endl;
    
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] swap values" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;
    
    swap_values(value_i, value_j);

    cout << "{" << endl;
    cout << "\tvalue_i: \'" << value_i << "\';" << endl;
    cout << "\tvalue_j: \'" << value_j << "\';" << endl;
    cout << "}" << endl;

    cout << endl;

    swap_values(value_x, value_y);

    cout << "{" << endl;
    cout << "\tvalue_x: \'" << value_x << "\';" << endl;
    cout << "\tvalue_y: \'" << value_y << "\';" << endl;
    cout << "}" << endl;

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}

template<typename T>
void swap_values(T& value_a, T& value_b)
{
    auto temp
        = value_a;

    value_a
        = value_b;

    value_b
        = temp;
}
