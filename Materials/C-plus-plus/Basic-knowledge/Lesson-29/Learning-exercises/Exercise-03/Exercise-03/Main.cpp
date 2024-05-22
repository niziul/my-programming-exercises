/*
    [ description of the third learning exercise ] :
        - The print function shown below only works for values
        of integer types. if we try to call it with floating-point,
        character or string values, we get the following result:

        ]
            #include <iostream>
            #include <string>

            using namespace std;

            void print(int a, int b)
            {
                int c = a + b;
                cout << a << " + " << b << " = " << c << endl;
            }

            int main()
            {
                string strA = "pro";
                string strB = "grammer";

                print(1, 2);
                print(2.6, 3.7);
                print('A', 'B');
                //print(strA, strB);
            }
        ]

        ]
            1 + 2 = 3
            2.6 + 3.7 = 6.3
            A + B = 131
            // erro
        ]

        you can fix all these problems using generic programming
        with templates. turn the print function into a template so
        that it correctly handles all the data types in the program.

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] print(1, 2);
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            {
                    '1' + '2' = '3';
            }

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] print(2.6, 3.7);
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            {
                    '2.6' + '3.7' = '6.3';
            }

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] print('A', 'B');
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            {
                    'A' + 'B' = '131';
            }

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] print(str_a, str_b);
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            {
                    'pro' + 'grammer' = 'programmer';
            }

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;

using std::string;

using std::streamsize;
using std::numeric_limits;

template <typename T>
void print(const T& content_a, const T& content_b)
{
    cout << "{" << endl;
    cout << "\t\'" << content_a << "\' + \'" << content_b << "\' = \'" << content_a + content_b << "\';" << endl;
    cout << "}" << endl;
}

int main()
{
    auto str_a
        = (string)"pro";

    auto str_b
        = (string)"grammer";

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] print(1, 2);" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    print(1, 2);

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] print(2.6, 3.7);" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    print(2.6, 3.7);

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] print('A', 'B');" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    print('A', 'B');

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] print(str_a, str_b);" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    print(str_a, str_b);

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}
