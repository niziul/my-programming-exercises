/*
    [ description of the second learning exercise ] :
        - A word is a palindrome if the sequence of letters that
        forms it is the same when read from left to right or from
        right to left (e.g. 'rairar'). write a function that can find
        out if a word is a palindrome. in this check, disregard upper
        and lower case (i.e 'ana' is a palindrome).

        the program must read and indefinite number of words from
        a text file and, for each word, check whether or not it is
        a palindrome. display the number of palindromes found in the
        text, as well as the words that are palindromes, as shown below:
        
        ]
            ```txt
                no rairar do dia Ana observou que esse radar estava quebrado.
            ```

            ```output
                file: palindromes.txt
                
                rair
                ana
                esse
                radar

                there were 4 palindromes in this file.
            ```
        ]

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            enter the name of the file containing the palindromes
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            : palindromes.txt

            -

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            [ 'raiar';
            [ 'ana';
            [ 'esse';
            [ 'radar';

            [ there were '4' palindromes in this file;

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#include <algorithm>
#include <iostream>
#include <fstream>

using std::reverse_copy;

using std::cin;
using std::cout;
using std::endl;

using std::ifstream;

using std::streamsize;
using std::numeric_limits;

bool is_a_palindrome(char*);

int main()
{
    auto istream
        = ifstream{};

    auto file
        = new char[32];

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "enter the name of the file containing the palindromes" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << ": ";
    cin >> file;

    cout << endl;
    cout << "-" << endl;
    cout << endl;
    
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    
    cout << endl;
    
    istream
        .open(file);

    if (istream.is_open())
    {
        auto amount
            = int{};

        auto buffer
            = new char[32];

        do
        {
            istream >> buffer;

            *buffer
                = tolower(*buffer);

            if (is_a_palindrome(buffer))
            {
                cout << "[ \'" << buffer << "\';" << endl;

                amount++;
            }

        } while (!istream.eof());

        delete[] buffer;

        cout << endl;

        cout << "[ there were \'" << amount << "\' palindromes in this file;" << endl;
    }
    else
    {
        cout << "- error when trying to open the file: \'" << file << "\';" << endl;
    }

    istream
        .close();

    cout << endl;
    
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;
    
    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    delete[] file;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}

bool is_a_palindrome(char* word)
{
    char inverted_word[32];

    *reverse_copy(word, word + strlen(word), inverted_word) = '\0';
    
    return strcmp(word, inverted_word) == 0;
}
