/*
    [ description of the second learning exercise ] :
        - Considering the athlete class developed in the first
        learning exercise of the lab-06, create a compare method
        that receives and athlete and returns a boolean to indicate
        who has the highest percentage of hits, the athlete received
        in the function or the athlete used to call the function.

        ]
            class athlete
            {
            private:
                int_fast16_t matches;
                int_fast16_t attempts;
                float_t percentage;
            }
        ]

        ]
            athlete rick { 10, 14 };
            athlete john { 10, 16 };
            athlete mark { 12, 15 };
            athlete luis { 15, 20 };
        ]

        create a vector with the players above and a program
        to compare and display the player with the best hitting
        percentage in the team.

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] the athlete with the highest percentage of hits
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            - name      : 'mark';
            - matches   : '12';
            - attempts  : '15';
            - percentage: '80';

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#include <iostream>
#include "athlete.h"

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

int main()
{
    auto const time
        =
        {
            athlete
            {
                "rick",
                10,
                14
            },
            athlete
            {
                "john",
                10,
                16
            },
            athlete
            {
                "mark",
                12,
                15
            },
            athlete
            {
                "luis",
                15,
                20
            }
        };

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] the athlete with the highest percentage of hits" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    auto athlete_with_the_highest_percentage_of_hits
        = time.begin();

    for (auto& athlete_a : time)
    {
        if (!athlete_a.compare(*athlete_with_the_highest_percentage_of_hits))
        {
            athlete_with_the_highest_percentage_of_hits
                = &athlete_a;
        }
    }

    athlete_with_the_highest_percentage_of_hits->display();

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}