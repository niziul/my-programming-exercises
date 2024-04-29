/*
    [ description of the second learning exercise ] :
        - Many libraries that implement operating system
        functionality use the concept of a call-back function.
        a call-back function is a function that is not called directly
        by your code, but by the code of the library, or by the system
        it is running on.

        for example, to find out all the game controller
        devices that are connected to a computer, the system
        library provides an 'Enumerate()' function which, instead
        of return the device data, calls a function (call-back function)
        each time it finds a device. let's build a program to simulate this
        scenario. the struct below holds the data of a game controller device.

        ]
            struct Controller
            {
                char name[40];
                int buttons;
                int axis;
            }
        ]

        build two call-back functions called 'listName()'
        and 'listAxes()', to display the names of the controllers
        and the number of axes respectively. the functions should
        work with the code below.

        ]
            #include <iostream>

            using namespace std;

            struct Controller
            {
                char name[40];
                int buttons;
                int axis;
            };

            void Enumerate(void(*f)(Controller))
            {
                Controller vet[] =
                {
                    {"Joy", 8, 4},
                    {"Xbox", 10, 3},
                    {"Play", 8, 6},
                };

                for (auto& i : vet)
                {
                    f(i);
                }
            }

            int main()
            {
                Enumerate(listNames);
                Enumerate(listAxes);
            }
        ]

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - controller name: 'Joy';
            - controller name: 'Xbox';
            - controller name: 'Play';
            - controller axis: '4';
            - controller axis: '3';
            - controller axis: '6';
            - controller buttons: '8';
            - controller buttons: '10';
            - controller buttons: '8';

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

struct st_controller
{
    char name[40];
    int buttons;
    int axis;
};

void enumerate(void(*pt_function)(const st_controller));

void listNames(const st_controller);
void listAxes(const st_controller);
void listButtons(const st_controller);

int main()
{
    
    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    enumerate(listNames);
    enumerate(listAxes);
    enumerate(listButtons);

    cout << endl;
    
    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}

void enumerate(void(*pt_function)(const st_controller))
{
    auto controllers
        =
        {
            st_controller
            {
                "Joy",
                8,
                4
            },
            st_controller
            {
                "Xbox",
                10,
                3
            },
            st_controller
            {
                "Play",
                8,
                6
            },
        };

    for (auto& controller : controllers)
    {
        (*pt_function)(controller);
    }
}

void listNames(const st_controller controller)
{
    cout << "- controller name: \'" << controller.name << "\';" << endl;
}

void listAxes(const st_controller controller)
{
    cout << "- controller axis: \'" << controller.axis << "\';" << endl;
}

void listButtons(const st_controller controller)
{
    cout << "- controller buttons: \'" << controller.buttons << "\';" << endl;
}
