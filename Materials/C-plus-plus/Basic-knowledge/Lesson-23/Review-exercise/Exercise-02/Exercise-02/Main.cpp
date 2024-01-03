/*
    [ description of the second review exercise ] :
        - Consider the text file below:

        ]
            ```txt
                Yesterday, at 12 noon, it was 40 degrees in the sun and 38 in the shade.
                I walked 100 meters before reaching a place in the shade.
                It was 5 minutes of suffering.
            ```
        ]

        write a program to read all the numbers form the text and
        write them to another file.

        ]
            ```txt
                12
                40
                38
                100
                5
            ```
        ]

        use the code below as a starting point:

        ]
            ```cpp
                #include <iostream>
                #include <fstream>

                using namespace std;

                int main()
                {
                    ifstream fin;
                    fin.open("sun.txt");
                    if (!fin.is_open())
                    {
                        cout << "Opening sun.txt failed!" << endl;
                        cout << "Program terminating." << endl;
                        exit(EXIT_FAILURE);
                    }

                    ofstream fout;
                    fout.open("num.txt");
                    if (!fout.is_open())
                    {
                        cout << "Opening num.txt failed!" << endl;
                        cout << "Program terminating." << endl;
                        exit(EXIT_FAILURE);
                    }

                    // ---------------------
                    // insert your code here
                    // ---------------------

                    fin.close();
                    fout.close();

                    cout << "done!" << endl;

                    return 0;
                }
            ```
        ]

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] all the numbers found in the sun.txt file
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            - 12;
            - 40;
            - 38;
            - 100;
            - 5;

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            - done!

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#include <iostream>
#include <fstream>

using std::cout;
using std::endl;

using std::ifstream;
using std::ofstream;

int main()
{
    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    ifstream fin;
    fin.open("sun.txt");
    if (!fin.is_open())
    {
        cout << "[ Opening sun.txt failed!" << endl;
        cout << "[ Program terminating." << endl;
        exit(EXIT_FAILURE);
    }

    ofstream fout;
    fout.open("num.txt");
    if (!fout.is_open())
    {
        cout << "[ Opening num.txt failed!" << endl;
        cout << "[ Program terminating." << endl;
        exit(EXIT_FAILURE);
    }

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] all the numbers found in the sun.txt file" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    auto number
        = int{};

    auto buffer
        = new char[32];

    fin >> number;
    
    while (!fin.eof())
    {
        if (fin.good())
        {
            cout << "- " <<  number << ";" << endl;
            fout << number << endl;
        }
        else
        {
            fin.clear();
            
            fin >> buffer;
        }

        fin >> number;
    }

    fin
        .close();
    fout
        .close();

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    
    cout << endl;

    cout << "- done!" << endl;
    
    cout << endl;
    
    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    delete[] buffer;

    return 0;
}