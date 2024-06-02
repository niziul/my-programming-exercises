/*
    [ description of the second fixation exercise ] :
        - Modify the point class from the previous question to
        introduce inline methods to return the values of the x
        and y attributes. test 3 different solutions:

        a: one with inline methods implemented inside the class;
        d: one with inline methods implemented in the .cpp files;
        c: one with inline methods implemented in the .h file;


    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] point_1.display_point_values();
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            {
                    x: '69';
                    y: '36';
            }

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] point_2.display_point_values();
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            {
                    x: '69';
                    y: '46';
            }

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] point_3.display_point_values();
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            {
                    x: '69';
                    y: '56';
            }

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#include <iostream>

#include "point_a.h"
#include "point_b.h"
#include "point_c.h"

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

int main()
{
    auto point_1
        = point_a(69, 36);

    auto point_2
        = point_b(69, 46);

    auto point_3
        = point_c(69, 56);

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] point_1.display_point_values();" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    point_1
        .display_point_values();

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] point_2.display_point_values();" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    point_2
        .display_point_values();

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] point_3.display_point_values();" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    point_3
        .display_point_values();

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}

inline void point_b::display_point_values()
{
    cout << "{" << endl;
    cout << "\tx: \'" << x << "\';" << endl;
    cout << "\ty: \'" << y << "\';" << endl;
    cout << "}" << endl;
}
