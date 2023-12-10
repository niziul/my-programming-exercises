/*
    [ description of the fourth fixation exercise ] :
        - Write a program that reads user's input word by word
        until it finds a word with only the letter 's'. The program
        should then report the number of words that begin with vowels,
        the number of word that begin with consonants and the number of
        word that don't fit into the previous cases. The output of the program
        should look like the example below:

        ]
            type a few words below ('s' to exit ):

            the 12 brave men fought
            to the death in those 15 minutes of battle. s

            '2' words begin with vowels;
            '11' words begin with consonants;
            '2' other words;
        ]

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            type a few words below ('s' to exit)
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            the 12 brave men fought
            to the death in those 15 minutes of battle. s

            -

            [ '2'    words begin with vowels;
            [ '11'   words begin with consonants;
            [ '2'    other words;

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#include <iostream>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;

using std::isalpha;
using std::tolower;

using std::streamsize;
using std::numeric_limits;

int main()
{
    auto words
        = new char[50];

    auto other
        = int{};

    auto vowels
        = int{};

    auto consonants
        = int{};

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "type a few words below (\'s\' to exit)" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    do
    {
        cin
            >> words;
        
        if (isalpha(*(words + 0)))
        {
            if (tolower(*(words + 0)) == 'a'
                ||
                tolower(*(words + 0)) == 'e'
                ||
                tolower(*(words + 0)) == 'i'
                ||
                tolower(*(words + 0)) == 'o'
                ||
                tolower(*(words + 0)) == 'u')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
        else
        {
            other++;
        }

    } while (tolower(*(words + 0)) != 's'
             &&
             tolower(*(words + 1)) != '\0');

    cout << endl;
    cout << "-" << endl;
    cout << endl;

    cout << "[ \'" << vowels << "\'\t words begin with vowels;" << endl;
    cout << "[ \'" << consonants << "\'\t words begin with consonants;" << endl;
    cout << "[ \'" << other << "\'\t other words;" << endl;

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;
    
    delete[] words;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}