/*
    [ description of the second fixation exercise ] :
        - Modify the previous program so that each step of
        the simulation is recorded in a text file as shown
        in the example below:

        ]
            enter the desired distance: 100
            -----------------------------------------------
            1: (x, y) = (2.83656, -0.976704)
            2: (x, y) = (4.69092, -0.227491)
            3: (x, y) = (5.68849, -0.157735)
            ...
            279: (x, y) = (-87.2427, 51.2761)
            -----------------------------------------------
            it took 279 simulation steps to arrive at:
            (x, y) = (-87.2427, 51.2761)
            (m, a) = (101.195, 149.555)
            -----------------------------------------------
            average distance per step: 0.358423
        ]

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] Enter the desired distance below
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            : 100

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] '1'
            {
                 x: '-4.24264',
                 y: '-4.24264',
            }
            ] '2'
            {
                 x: '0.393279',
                 y: '-2.36961',
            }
            ] '3'
            {
                 x: '-0.481341',
                 y: '-1.8848',
            }
            ...
            ] '439'
            {
                 x: '-95.5237',
                 y: '30.8152',
            }

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] it took '439' simulation steps to arrive at:
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            x: '-95.5237',
            y: '30.8152',
            m: '100.371',
            a: '162.121',

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] average distance per step
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            0.228636

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#include <iostream>
#include <fstream>
#include "lazy_vector2/lazy_vector2.h"

using std::cin;
using std::cout;
using std::endl;

using std::ofstream;

using std::streamsize;
using std::numeric_limits;

int main()
{
    auto simulation_steps
        = int{};

    auto desired_distance
        = double{};

    auto vector_a
        = lazy_vector2{};

    auto simulation_step_file
        = ofstream("simulation_step.txt", std::ios::out
                                          |
                                          std::ios::trunc);

    srand(time(NULL));
    
    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] Enter the desired distance below" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    cout << ": ";
    cin >> desired_distance;

    cout << endl;

    do
    {
        auto static random_magnitude
            = int{};
        auto static random_angle
            = int{};

        random_magnitude
            = rand() % 9;

        random_angle
            = rand() % 359;

        vector_a
            = vector_a + lazy_vector2(random_magnitude,
                                      random_angle);

        simulation_steps++;

        cout << "] \'" << simulation_steps << "\'\n";
        cout << "{\n";
        cout << "\t x: \'" << vector_a.get_x() << "\',\n";
        cout << "\t y: \'" << vector_a.get_y() << "\',\n";
        cout << "}\n";

        simulation_step_file << "] \'" << simulation_steps << "\'\n";
        simulation_step_file << "{\n";
        simulation_step_file << "\t x: \'" << vector_a.get_x() << "\',\n";
        simulation_step_file << "\t y: \'" << vector_a.get_y() << "\',\n";
        simulation_step_file << "}\n";

    } while (vector_a.get_magnitude() < desired_distance);

    simulation_step_file.close();

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] it took \'" << simulation_steps << "\' simulation steps to arrive at:" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    cout << "x: \'" << vector_a.get_x() << "\'," << endl;
    cout << "y: \'" << vector_a.get_y() << "\'," << endl;
    cout << "m: \'" << vector_a.get_magnitude() << "\'," << endl;
    cout << "a: \'" << vector_a.get_angle() << "\'," << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] average distance per step" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    cout << vector_a.get_magnitude() / simulation_steps << endl;

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}