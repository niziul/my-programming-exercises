/*
    [ description of the second learning exercise ] :
        - Test the athlete class by creating a program that performs
        operations with the 3 athletes below and with a special athlete
        called the team, which must accumulate the total of matches and
        attempts of all the athletes.

        ]
            auto rick
                = athlete
                {
                    13,
                    14
                };

            auto john
                = athlete
                {
                    10,
                    16
                };

            auto mark
                = athlete
                {
                    7,
                    9
                };

            auto time
                = athlete{};
        ]

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] rick.display();
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            - matches   : '13';
            - attempts  : '14';
            - percentage: '92.8571';

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] john.display();
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            - matches   : '10';
            - attempts  : '16';
            - percentage: '62.5';

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] mark.display();
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            - matches   : '7';
            - attempts  : '9';
            - percentage: '77.7778';

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] time.display();
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            - matches   : '30';
            - attempts  : '39';
            - percentage: '76.9231';

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

    auto john
        = athlete
        {
            10,
            16
        };

    auto mark
        = athlete
        {
            7,
            9
        };

    auto time
        = athlete{};

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] rick.display();" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    rick
        .display();

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] john.display();" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    john
        .display();

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] mark.display();" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    mark
        .display();

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] time.display();" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    time
        .accumulate(rick);
    time
        .accumulate(john);
    time
        .accumulate(mark);

    time
        .display();

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}