/*
    [ description of the first fixation exercise ] :
        - is the size of an object in memory defined only by
        the space occupied by its atributes or does it also include
        the methods? build a program to do the test using the sizeof
        operator and the point class shown below.

        ]
            class c_point
            {
            public:
                c_point()
                {
                }
                void move_to(int x, int y);
                void translate(int x, int y);

            private:
                int x;
                int y;
            };
            
        ]

        answer: only the attributes!

    [ output ] :
        ```

        ```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

class c_point
{
public:
    c_point()
    {
    }
    void move_to(int_fast16_t x, int_fast16_t y);
    void translate(int_fast16_t x, int_fast16_t y);

private:
    int_fast16_t x;
    int_fast16_t y;
};

int main()
{
    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] sizeof(c_point)" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    cout << "- \'" << sizeof(c_point) << "\'bytes;" << endl;

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}
