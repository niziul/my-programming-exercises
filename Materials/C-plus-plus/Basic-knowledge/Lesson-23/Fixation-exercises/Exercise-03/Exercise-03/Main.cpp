/*
    [ description of the third fixation exercise ] :
        - Write a program that opens a text file, reads character
        by character until the end of the file and displays on the
        screen the total number of characters, the number of vowels,
        the number of consonants, and the number of other characters
        present in the text.

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            ] enter the name of the text file you want to analyze below
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            : deep.txt

            -

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            - total of:

            [ characters : '18';
            [ consonants : '9';
            [ vowels     : '7';
            [ other      : '2';

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
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
    auto file_name
        = new char[34];

    auto istream
        = ifstream{};
    
    auto total
        = new int[4]
        {
            0, /* characters */
            0, /* consonants */
            0, /* vowels */
            0, /* other */
        };

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "] enter the name of the text file you want to analyze below" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << ": ";
    cin >> file_name;

    cout << endl;
    cout << "-" << endl;
    cout << endl;
    
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    
    cout << endl;
    
    istream
        .open(file_name);


    if (istream.is_open())
    {
        auto buffer
            = char{};

        do
        {
            istream >> buffer;

            buffer
                = tolower(buffer);
            
            if (isalpha(buffer))
            {
                if (buffer == 'a'
                    ||
                    buffer == 'e'
                    ||
                    buffer == 'i'
                    ||
                    buffer == 'o'
                    ||
                    buffer == 'u')
                {
                    (*(total + 2))++;
                }
                else
                {
                    (*(total + 1))++;
                }
            }
            else
            {
                (*(total + 3))++;
            }

        } while (!istream.eof());

        *total
            = *(total + 1)
              +
              *(total + 2)
              +
              *(total + 3);
    }
    else
    {
        cout << "- erro." << endl;
    }

    istream
        .close();

    cout << "- total of:" << endl;
    
    cout << endl;
    
    cout << "[ characters : \'" << *(total + 0) << "\';" << endl;
    cout << "[ consonants : \'" << *(total + 1) << "\';" << endl;
    cout << "[ vowels     : \'" << *(total + 2) << "\';" << endl;
    cout << "[ other      : \'" << *(total + 3) << "\';" << endl;
    
    cout << endl;
    
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    delete[] total;
    delete[] file_name;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}