/*
    [ description of the fifth fixation exercise ] :
        - Write a program that asks the user to enter a text file
        name and a word they want to search for in this file. the
        program must tell the user whether or not the word is present
        in the file.

        ]
            file name: text.txt
            word: men
            the word 'men' is present in the text.
        ]

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            ] enter the name of the file you want to analyze
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            : text.txt

            ] enter the word you want to search for
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            : men

            -

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            [ the word 'men' is present in the text;

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#include <iostream>
#include <fstream>

using std::cin;
using std::cout;
using std::endl;

using std::ifstream;

using std::streamsize;
using std::numeric_limits;

int main()
{
    auto is_present
        = bool{};

    auto file
        = new char[32];

    auto input
        = new char[32];

    auto istream
        = ifstream{};
    
    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "] enter the name of the file you want to analyze" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << ": ";
    cin >> file;

    cout << endl;

    cout << "] enter the word you want to search for" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << ": ";
    cin >> input;

    cout << endl;
    cout << "-" << endl;
    cout << endl;
    
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    
    cout << endl;
    
    istream
        .open(file);

    if (istream.is_open())
    {
        auto buffer
            = new char[32];

        do
        {
            istream >> buffer;

            if (strcmp(buffer, input) == 0)
            {
                is_present
                    = true;

                break;
            }            

        } while (!istream.eof());

        delete[] buffer;
    }
    else
    {
        cout << "- erro." << endl;
    }

    istream
        .close();

    cout << "[ the word \'" << input << "\' " << (is_present ? "is present" : "is not present") << " in the text;" << endl;

    cout << endl;
    
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;
    
    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    delete[] file;
    delete[] input;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}