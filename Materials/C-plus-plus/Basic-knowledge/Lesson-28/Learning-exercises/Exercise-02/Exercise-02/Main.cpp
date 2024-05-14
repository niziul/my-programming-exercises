/*
    [ description of the second learning exercise ] :
        - Considering the tuple struct defined below, build
        a 'invert_tuples()' function that receives two tuples
        and inverts their values. write a program to test the function.

        ]
            struct tuple
            {
                int a;
                int b;
                int c;
            }

            tuple a: 15 20 25
            tuple b: 40 50 60

            inverting...

            tuple a: 40 50 60
            tuple b: 15 20 25
        ]

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            ] enter the values for the tuple_a below
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            value_a: 15
            value_b: 20
            value_c: 25

            ] enter the values for the tuple_b below
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            value_a: 40
            value_b: 50
            value_c: 60

            -

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] inverted tuple values
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            ; tuple_a
            {
                    value_a: '40'
                    value_b: '50'
                    value_c: '60'
            }

            ; tuple_b
            {
                    value_a: '15'
                    value_b: '20'
                    value_c: '25'
            }

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

struct st_tuple
{
    int_fast16_t value_a;
    int_fast16_t value_b;
    int_fast16_t value_c;
};

void invert_tuples(st_tuple&, st_tuple&);

int main()
{
    auto tuple_a
        = st_tuple{};

    auto tuple_b
        = st_tuple{};

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "] enter the values for the tuple_a below" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "value_a: ";
    cin >> tuple_a.value_a;
    cout << "value_b: ";
    cin >> tuple_a.value_b;
    cout << "value_c: ";
    cin >> tuple_a.value_c;

    cout << endl;

    cout << "] enter the values for the tuple_b below" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "value_a: ";
    cin >> tuple_b.value_a;
    cout << "value_b: ";
    cin >> tuple_b.value_b;
    cout << "value_c: ";
    cin >> tuple_b.value_c;

    cout << endl;
    cout << "-" << endl;
    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] inverted tuple values" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    invert_tuples(tuple_a, tuple_b);

    cout << endl;
    
    cout << "; tuple_a" << endl;
    cout << "{" << endl;
    cout << "\tvalue_a: \'" << tuple_a.value_a << "\'" << endl;
    cout << "\tvalue_b: \'" << tuple_a.value_b << "\'" << endl;
    cout << "\tvalue_c: \'" << tuple_a.value_c << "\'" << endl;
    cout << "}" << endl;

    cout << endl;

    cout << "; tuple_b" << endl;
    cout << "{" << endl;
    cout << "\tvalue_a: \'" << tuple_b.value_a << "\'" << endl;
    cout << "\tvalue_b: \'" << tuple_b.value_b << "\'" << endl;
    cout << "\tvalue_c: \'" << tuple_b.value_c << "\'" << endl;
    cout << "}" << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}

void invert_tuples(st_tuple& tuple_a, st_tuple& tuple_b)
{
    auto static tuple_a_values
        = int_fast16_t{};

    auto static tuple_b_values
        = int_fast16_t{};

    /* inverting the values_a - - - - - - - - - - - - - - - - - - - - */

    tuple_a_values
        = tuple_a.value_a;

    tuple_b_values
        = tuple_b.value_a;

    tuple_a
        .value_a = tuple_b_values;

    tuple_b
        .value_a = tuple_a_values;

    /* inverting the values_b - - - - - - - - - - - - - - - - - - - - */

    tuple_a_values
        = tuple_a.value_b;

    tuple_b_values
        = tuple_b.value_b;

    tuple_a
        .value_b = tuple_b_values;

    tuple_b
        .value_b = tuple_a_values;

    /* inverting the values_c - - - - - - - - - - - - - - - - - - - - */

    tuple_a_values
        = tuple_a.value_c;

    tuple_b_values
        = tuple_b.value_c;

    tuple_a
        .value_c = tuple_b_values;

    tuple_b
        .value_c = tuple_a_values;

    /* - - - - - - - - - - - - - - - - - - - - */
}
