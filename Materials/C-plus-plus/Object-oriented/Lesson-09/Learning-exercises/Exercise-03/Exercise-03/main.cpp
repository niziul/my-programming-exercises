/*
    [ description of the third learning exercise ] :
        - Create a packager class that uses a dynamic vector
        to store a sequence of integer values of any size. the
        class should act as a number packager. its function is
        to store a list of numbers and provide a method for packing
        these numbers into packets of 4;

        it should be used as in the example below:

        ]
            int main()
            {
                packager packager_a { 10 };

                cout << "adding numbers..." << endl;

                packager_a[0] = 9;
                packager_a[1] = 2;
                packager_a[2] = 8;
                packager_a[3] = 7;
                packager_a[4] = 1;
                packager_a[5] = 3;
                packager_a[6] = 5;
                packager_a[7] = 8;
                packager_a[8] = 1;
                packager_a[9] = 6;
                packager_a[10] = 4; // should display an error message
                                    // and no value should be stored.

                cout << "packer contents..." << endl;

                for (int i=0; i<10; ++i)
                    cout << packager_a[i] << " ";

                cout << "creating and sending packages..." << endl;

                packager_a.send(); // should display 9287
                packager_a.send(); // should display 1358
                packager_a.send(); // should display 1600
            }
        ]

        the class must have the following features:

        a: the stored values must be of type short;

        b: the constructor must require the size of the
        package;

        c: create a dynamic array with the size given in
        the constructor;

        e: release the dynamic array in the destructor;

        f: provide access to the elements of the dynamic
        array via the operator '[]';

        g: check the indexes before accessing the dynamic
        array: if the requested index does not exist, display
        a warning message and do not modify the dynamic array;

        h: provide a send() method to merge 4 short values into
        a single 'long long' value; this method can use the packet
        class created in the fixation exercise to simplify the process;

        i: make the send() method display the packaged value;

        j: each call to send() should pack the next group
        of 4 values from the dynamic array. if there are no
        4 numbers available, the pack must be completed with
        zero values;

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] adding numbers...
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            error: index out of scope;

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] packer contents...
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            9 2 8 7 1 3 5 8 1 6

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] creating and sending packages...
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            9287
            1358
            1600

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#include <iostream>
#include "lazy_packager/lazy_packager.h"

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

int main()
{
    auto packager_a
        = lazy_packager
        {
            10
        };

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] adding numbers..." << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    packager_a[0] = 9;
    packager_a[1] = 2;
    packager_a[2] = 8;
    packager_a[3] = 7;
    packager_a[4] = 1;
    packager_a[5] = 3;
    packager_a[6] = 5;
    packager_a[7] = 8;
    packager_a[8] = 1;
    packager_a[9] = 6;
    packager_a[10] = 4; // should display an error message
                        // and no value should be stored.
    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] packer contents..." << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    for (int i = 0; i < 10; ++i)
    {
        cout << packager_a[i] << " ";
    }

    cout << endl;
    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] creating and sending packages..." << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    packager_a.send(); // should display 9287
    packager_a.send(); // should display 1358
    packager_a.send(); // should display 1600

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');

}