/*
    [ description of the first learning exercise ] :
        - Transform the athlete struct and the functions below
        into a class containing:

        1. a standard constructor;
        2. a constructor with parameters to initialize matches
           and attempts;
        3. a destructor, if necessary;
        4. an inline method to implement the calculate function;
        5. use const in the declaration of methods that do not change
           attributes;

        ]
            struct st_athlete
            {
                int matches;
                int attempts;
                float percentage;
            };

            void calculate(st_athlete& athlete)
            {
                if (athlete.attempts != 0)
                {
                    athlete.percentage = 100.0f * athlete.matches / athlete.attempts;
                }
                else
                {
                    athlete.percentage = 0;
                }
            }

            void display(const st_athlete& athlete)
            {
                cout << "matches = \'" << athlete.matches << "\';" << endl;
                cout << "attempts = \'" << athlete.attempts << "\';" << endl;
                cout << "percentage = \'" << athlete.percentage << "\';" << endl;
            }

            st_athlete& accumulate(st_athlete& sum, const st_athlete& athlete)
            {
                sum.attempts += athlete.attempts;
                sum.matches += athlete.matches;

                calculate(sum);

                return sum;
            }
        ]

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - matches   : '13';
            - attempts  : '14';
            - percentage: '92.8571';

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#include "athlete.h"

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

int main()
{
    auto rick
        = athlete
        {
            13,
            14
        };

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    rick
        .display();

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}
