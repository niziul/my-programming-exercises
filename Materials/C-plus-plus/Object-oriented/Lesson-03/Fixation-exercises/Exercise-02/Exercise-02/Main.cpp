/*
    [ description of the second fixation exercise ] :
        - One of the benefits of encapsulating data is to control
        access and modification in order to maintain its integrity,
        i.e to avoid incorrect changes to the data by the programmer.
        in the case where data can be changed freely, c++ makes it possible
        o solve a problem using:

        a: structs with member functions;
        b: classes with public data;

        test the two solutions in the problem below:

        ]
            // stores 'x' and 'y' coordinates;

            // function to move coordinates by 'dx' and 'dy';

            // function to move coordinates by 'px' and 'py';
        ]

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] point_a.function_a(5, 15);
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            ...

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] point_b.x = 4;
            ] point_b.y = 32;
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            ...

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] point_a.function_b(5, 15);
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            ...

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] point_b.x += 4;
            ] point_b.y += 32;
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            ...

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

struct st_point
{
    int_fast16_t x;
    int_fast16_t y;

    void function_a(int_fast16_t px, int_fast16_t py)
    {
        x
            = px;
        y
            = py;
    }

    void function_b(int_fast16_t dx, int_fast16_t dy)
    {
        x
            += dx;
        y
            += dy;
    }
};

class c_point
{
public:
    int_fast16_t x;
    int_fast16_t y;

    c_point(int_fast16_t x, int_fast16_t y)
    {
        this->x
            = x;
        this->y
            = y;
    }

private:

};

int main()
{
    auto point_a
        = st_point
        {
            20,
            40,
        };

    auto point_b
        = c_point(20,
                  40);

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] point_a.function_a(5, 15);" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    point_a
        .function_a(5,
                    15);

    cout << "..." << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] point_b.x = 4;" << endl;
    cout << "] point_b.y = 32;" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    point_b
        .x = 4;

    point_b
        .y = 32;

    cout << "..." << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] point_a.function_b(5, 15);" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    point_a
        .function_b(5,
                    15);

    cout << "..." << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] point_b.x += 4;" << endl;
    cout << "] point_b.y += 32;" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    point_b
        .x += 4;

    point_b
        .y += 32;

    cout << "..." << endl;

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}
