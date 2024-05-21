/*
    [ description of the first learning exercise ] :
        - Build a function that reads a certain number
        of lines from the text file shown below and displays
        a summary of the information. there are 4 values in each
        line: the lab number, the amount of revision exercises, the
        amount of fixation exercises and the amount of learning exercises.

        ]
            | lesson | review | fixation | learning |   / 
              0	       0        0          7            / --------------------------------
              1	       2        8          4            / 1st unit
              2	       6        4          5            / --------------------------------
              3	       2        3          6            / review: 16
              4	       2        3          6            / fixation: 41
              5	       2        3          7            / learning: 51
              6	       1        3          5            / --------------------------------
              7	       0        5          5            / total: 108
              8	       0        5          4            / 
              9	       1        4          5            / --------------------------------
              10       0        3          4            / 2nd unit
              11       0        5          5            / --------------------------------
              12       2        4          6            / review: 14
              13       1        2          4            / fixation: 38
              14       5        4          4            / learning: 52
              15       4        5          5            / --------------------------------
              16       4        2          4            / total: 104
              17       4        3          5            / 
              18       4        3          6            / --------------------------------
              19       2        4          5            / 3rd unit
              20       5        4          4            / --------------------------------
              21       5        4          7            / review: 10
              22       2        5          5            / fixation: 38
              23       2        5          3            / learning: 53
              24       3        4          3            / --------------------------------
              25       3        3          4            / total: 101
              26       3        3          5            / 
              27       2        3          3            / 
              28       1        4          3            / 
              29       0        5          3            / 
        ]

        the function must receive a reference to an object
        of type ifstream, the unit number and the number of
        lines to be read. use a default argument of 10 for the
        number of lines, the function should work with the code
        below:

        ]
            int main()
            {
                ifstream fin;
                fin.open("lesson_information.txt");
                unit(fin, 1);
                unit(fin, 2);
                unit(fin, 3);
                fin.close();
            }
        ]

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] unit(fin, 1);
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            {
             amount_of_revision_exercises: '16';
             amount_of_fixation_exercises: '41';
             amount_of_learning_exercises: '51';
            }
            - total: '108';

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] unit(fin, 2);
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            {
             amount_of_revision_exercises: '14';
             amount_of_fixation_exercises: '38';
             amount_of_learning_exercises: '52';
            }
            - total: '104';

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] unit(fin, 3);
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            {
             amount_of_revision_exercises: '10';
             amount_of_fixation_exercises: '38';
             amount_of_learning_exercises: '53';
            }
            - total: '101';

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#include <iostream>
#include <fstream>

using std::cin;
using std::cout;
using std::endl;

using std::ios_base;

using std::ifstream;

using std::streamsize;
using std::numeric_limits;

void unit(ifstream&, const int_fast16_t, const int_fast16_t = 10);

int main()
{
    auto fin
        = ifstream{};

    fin
        .open("lesson_information.txt", ios_base::in);

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] unit(fin, 1);" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    unit(fin, 1);

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] unit(fin, 2);" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    unit(fin, 2);

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] unit(fin, 3);" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    unit(fin, 3);

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    fin
        .close();

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}

void unit(ifstream& fin, const int_fast16_t unit_amount, const int_fast16_t line_amount)
{
    auto temp
        = unsigned{};

    auto amount_of_revision_exercises
        = uint_fast16_t{};

    auto amount_of_fixation_exercises
        = uint_fast16_t{};

    auto amount_of_learning_exercises
        = uint_fast16_t{};

    if (fin.is_open())
    {
        fin
            .seekg(0);

        for (size_t i = 0; i < unit_amount; i++)
        {
            fin >> temp;
            fin >> temp;
            fin >> temp;
            fin >> temp;
        }

        for (size_t i = 0; i < line_amount; i++)
        {
            fin >> temp;
            
            fin >> temp;
            amount_of_revision_exercises
                += temp;

            fin >> temp;
            amount_of_fixation_exercises
                += temp;

            fin >> temp;
            amount_of_learning_exercises
                += temp;
        }
        
        cout << "{" << endl;
        cout << " amount_of_revision_exercises: \'" << amount_of_revision_exercises << "\';" << endl;
        cout << " amount_of_fixation_exercises: \'" << amount_of_fixation_exercises << "\';" << endl;
        cout << " amount_of_learning_exercises: \'" << amount_of_learning_exercises << "\';" << endl;
        cout << "}" << endl;

        cout << "- total: \'" << amount_of_revision_exercises
                                 +
                                 amount_of_fixation_exercises
                                 +
                                 amount_of_learning_exercises << "\';" << endl;
    }
    else
    {
        cout << "- erro!" << endl;
    }
}
