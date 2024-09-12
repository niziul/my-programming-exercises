/*
    [ description of the first fixation exercise ] :
        - Build a program to simulate the "flight of the fly".
        the fly flies in one direction for a certain time, then
        changes direction, flies for another time and repeats this
        process indefinitely. the fly's direction can be defined by
        a random angle (0 to 359 degrees) and its flight time by a random
        magnitude (0 to 9) of a vector. the image below shows what typical
        fly behavior would look like.

        choose one of the versions of the vector class implemented
        in the previous exercises to simulate the fly's flight - the
        program should read a distance from the user and display how
        many simulation steps it too until the fly reached that distance
        from its point of origin. the able below shows an example.

        ]
            enter the desired distance: 100
            -----------------------------------------------
            it took 288 simulation steps to arrive at:
            (x, y) = (23.7105, 97.8239)
            (m, a) = (100.659, 76.3754)
            -----------------------------------------------
            average distance per step: 0.347222
        ]

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] Enter the desired distance below
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            : 100

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] it took '750' simulation steps to arrive at:
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            x: '-99.4066',
            y: '11.5763',
            m: '100.078',
            a: '173.358',

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] average distance per step
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            0.133438

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#include <iostream>
#include "lazy_vector2/lazy_vector2.h"

using std::cin;
using std::cout;
using std::endl;

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

    } while (vector_a.get_magnitude() < desired_distance);

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