/*
    [ description of the third learning exercise ] :
        -Create a function called 'firstName' and another called
        'lastName'. the functions must be given a source string and
        a destination string. the source string must contain a person's
        full name. the functions should copy the person's first and last
        name respectively into the target string. in the main program, read
        a series of full names and display the results of the functions, as
        in the example below.

        ]
            enter the names to be registered ('.' to close):
            : Júnior Lima da Silva
            ; Silva, Júnior

            : Benedito Nogueira Ramalho
            ; Ramalho, Benedito

            : Ricardo Amaral Neto
            ; Neto, Ricardo

            : Jamile Osório de Paulo
            ; Paula, Jamile

            : .
        ]

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - <@>

            ] enter the names to be registered ('.' to close):

            : Júnior Lima da Silva
            ; Silva, Júnior

            : Benedito Nogueira Ramalho
            ; Ramalho, Benedito

            : Ricardo Amaral Neto
            ; Neto, Ricardo

            : Jamile Osório de Paulo
            ; Paulo, Jamile

            : .

            <@> - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

void getFirstNameOfThis(const char*, char*);
void getLastNameOfThis(const char*, char*);

int main()
{
    auto fullName
        = new char[80];

    auto firstName
        = new char[10];

    auto lastName
        = new char[10];

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "] enter the names to be registered ('.' to close):" << endl;
    
    cout << endl;
    
    while (true)
    {
        cout << ": ";
        cin
            .getline(fullName, 80);

        if (*fullName == '.')
        {
            break;
        }

        getFirstNameOfThis(fullName, firstName);

        getLastNameOfThis(fullName, lastName);

        cout << "; " << lastName << ", " << firstName << endl;

        delete[] fullName;
        delete[] firstName;
        delete[] lastName;

        fullName
            = new char[80];

        firstName
            = new char[10];

        lastName
            = new char[10];

        cout << endl;
    }

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    delete[] fullName;
    delete[] firstName;
    delete[] lastName;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}

void getFirstNameOfThis(const char* cp_fullName, char* p_firstName)
{
    do
    {
        *(p_firstName++)
            = *cp_fullName++;

    } while (*cp_fullName != '\x20');

    *p_firstName
        = '\x00';
}

void getLastNameOfThis(const char* cp_fullName, char* p_lastName)
{
    while (*cp_fullName != '\x00')
    {
        *cp_fullName++;
    }

    while (*cp_fullName != '\x20')
    {
        *cp_fullName--;
    }

    do
    {
        *cp_fullName++;

        *(p_lastName++)
            = *cp_fullName;

    } while (*cp_fullName != '\x00');
}
