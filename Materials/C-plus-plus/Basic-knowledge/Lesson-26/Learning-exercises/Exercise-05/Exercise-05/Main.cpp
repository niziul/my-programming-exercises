/*
    [ description of the fifth learning exercise ] :
        - Build a struct to store a set of characters. the struct
        should store a pointer to a dynamic vector of characters and
        the size of the vector, as shown below:

        ]
            struct CharSet
            {
                char * str;
                int size;
            }
        ]

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - <@>

            d
            c
            3
            4
            6
            d
            0
            p

            <@> - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

struct st_characters
{
    char* chars;
    int size;
};

int main()
{
    auto temp
        =
        {
            'd',
            'c',
            '3',
            '4',
            '6',
            'd',
            '0',
            'p',
        };

    auto characters
        = st_characters
        {
            (char*)
                temp.begin(),
            (int)
                temp.size(),
        };

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;
    
    cout << endl;

    for (auto i = 0; i < characters.size; i++)
    {
        cout << *characters.chars++ << endl;
    }

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}