/*
    [ description of the first learning exercise ] :
        - A runner wants to compute the total time of a race
        from the split times of each lap. to help him, create
        a function 'lapTime()' which takes the time of a lap,
        accumulates it in a static local variable and returns
        the accumulated total. create a program that reads the
        time of each lap and calls the 'lapTime()' function with
        the value read. the program should run until the runner enters
        an invalid value for the lap time.

        ]
            lap: 16.2
            total time = 16.2 secs.

            lap: 18.5
            total time = 34.7 secs.

            lap: 20.1
            total time = 54.8 secs.

            lap: 21.4
            total time = 72.2 secs.

            lap: end
        ]

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            ] lap_time: 16.2
            ; total_time: '16.2' secs ;

            ] lap_time: 18.5
            ; total_time: '34.7' secs ;

            ] lap_time: 20.1
            ; total_time: '54.8' secs ;

            ] lap_time: 21.4
            ; total_time: '76.2' secs ;

            ] lap_time: end

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

float_t calculateLapTime(float_t&);

int main()
{
    auto lapTime
        = float_t{};

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;
    
    while (true)
    {
        cout << "] lap_time: ";
        cin >> lapTime;

        if (cin.fail()
            ||
            lapTime < 0)
        {
            break;
        }

        cout << "; total_time: \'" << calculateLapTime(lapTime) << "\' secs ;" << endl;
        
        cout << endl;
    }

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}

float_t calculateLapTime(float_t& lapTime)
{
    auto static total
        = float_t{};

    return total += lapTime;
}
