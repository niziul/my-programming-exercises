/*
    [ description of the third fixation exercise ] :
        - Create a class to represent a list of elements, similar
        to the example below. the list should store the items in a
        dynamic array and have methods for adding new items and checking
        whether the list is empty or full.

        ]
            class lazy_list
            {
            public:
                lazy_list(const int& size);
                ~lazy_list();

                bool empty()
                const;
                bool full()
                const;
                bool add(const lazy_item& item);

            private:
                lazy_item* items;
                int size;
                int max;

            };
        ]

        overwrite the operator[] function to provide direct access
        to any element in the list. the operator should return the
        item at the indicated position or should return 0 nd display
        an error message if the list has no elements at the requested
        index. below is an example of using the class:

        ]
            int main()
            {
                list list_a {5};
                list_a.add(2);
                list_a.add(3);
                list_a.add(6);

                cout << list_a[0]; // should display 2;
                cout << list_a[3]; // should display 0 and an error message
            }
        ]

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] list_a.add(2);
            ] list_a.add(3);
            ] list_a.add(6);
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -


            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] list_a[0]
            ] list_a[3]
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            2
            error: index out of scope; 0

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#include <iostream>
#include "lazy_list.h"

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

int main()
{
    auto list_a
        = lazy_list
        {
            5
        };

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] list_a.add(2);" << endl;
    cout << "] list_a.add(3);" << endl;
    cout << "] list_a.add(6);" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    list_a
        .add(2);

    list_a
        .add(3);

    list_a
        .add(6);

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] list_a[0]" << endl;
    cout << "] list_a[3]" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    cout << list_a[0] << endl;
    cout << list_a[3] << endl;

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}