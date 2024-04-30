/*
    [ description of the third learning exercise ] :
        - Call-back functions are also widely used when
        creating user interface (windows, buttons, text
        boxes, etc...). considerer a 'createButton()' function
        that receives the 'x', 'y' position at which the button
        should be drawn inside the window and a function to be executed
        when the button is pressed. the code below is trying to simulate
        this situation.

        complete the code by creating the 'createButton()'
        function. it should display a message informing you
        of the screen position at which the button was created
        and assign the received function to 'onClick' global pointer
        so that the output is as follows:

        ]
            button created in position x:10; y:10;

            button pressed? y

            button pressed!
        ]

        ]
            #include <iostream>

            using namespace std;

            void (*OnClick)(void);

            void Message()
            {
                cout << "button pressed!" << endl;
            }

            int main()
            {
                CreateButton(10, 10, Message);

                cout << "button pressed? ";
                char input;
                cin >> input;

                if (input == 'y' || input == 'Y')
                    OnClick();

                return 0;
            }
        ]

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ; button created in position x:10; y:10;
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            button pressed ('y' = to press)
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            : y

            -

            ] button pressed!

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

void (*g_pt_onClick)(void);

void createButton(int, int, void(*)(void));

void message();

int main()
{
    auto input
        = char{};

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    createButton(10,
                 10,
                 message);
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;
    
    cout << "button pressed ('y' = to press)" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << ": ";
    cin >> input;

    cout << endl;
    cout << "-" << endl;
    cout << endl;

    if (input == 'y'
        ||
        input == 'Y')
    {
        g_pt_onClick();
    }

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    return 0;
}

void createButton(int x, int y, void(*ptFunction)(void))
{
    cout << "; button created in position x:" << x << "; y:" << y << ";" << endl;

    g_pt_onClick
        = ptFunction;
}

void message()
{
    cout << "] button pressed!" << endl;
}
