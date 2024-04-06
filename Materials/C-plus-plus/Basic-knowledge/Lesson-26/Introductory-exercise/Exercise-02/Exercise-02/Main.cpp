/*
    [ output ] :
        ``` output using the wrong way to return a string.
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            ] enter your name below
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            : joaozinho

            -

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            [ your name in reverse: '╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠@¡█°╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠';

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```

        ``` output using the right way to return a string.
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            ] enter your name below
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            : joaozinho

            -

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            [ your name in reverse: 'ohnizoaoj';

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

/*
    wrong way:
*/
char* returnThisStringInInverse(const char*);

/*
    right way:
*/
void invertThisString(const char*, char*);

int main()
{
    auto name
        = new char[40];

    auto inverse
        = new char[40];

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "] enter your name below" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << ": ";
    cin
        .getline(name, 40);

    cout << endl;
    cout << "-" << endl;
    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    /*
        wrong way:
    */
    //cout << "] your name in reverse: \'" << returnThisStringInInverse(name) << "\';" << endl;

    /*
        right way:
    */
    invertThisString(name, inverse);

    cout << "[ your name in reverse: \'" << inverse << "\';" << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    delete[] name;
    delete[] inverse;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}

/*
    wrong way:
*/
char* returnThisStringInInverse(const char* t_string)
{
    char inverse[40];

    auto const size
        = strlen(t_string);

    for (auto i = 0; i < size; i++)
    {
        *(inverse + i)
            = *(t_string + ((size - 1) - i));
    }

    *(inverse + size)
        = '\0';

    return inverse;
}

/*
    right way:
*/
void invertThisString(const char* t_string, char* t_inverse)
{
    auto const size
        = strlen(t_string);

    for (auto i = 0; i < size; i++)
    {
        *(t_inverse + i)
            = *(t_string + ((size - 1) - i));
    }

    *(t_inverse + size)
        = '\0';
}
