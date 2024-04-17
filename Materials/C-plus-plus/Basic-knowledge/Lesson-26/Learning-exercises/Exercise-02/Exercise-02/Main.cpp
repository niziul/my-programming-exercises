/*
    [ description of the second learning exercise ] :
        - Build a program that reads a list of full names. the
        program should only stop reading when the name 'end' is
        typed in. pass each full name to a function that should
        capitalize the first letters of each part of the name and
        lowercase the rest, as shown in the example below. the function
        should return a boolean indicating whether any changes have been
        made to the original name. the main program should use the return
        value to indicate whether or not the name has been corrected. note
        that the program does not capitalize name that have two or fewer characters,
        such as the connectors 'da' and 'de'.

        ]
            Enter the names of those approved (enter 'end' to close)
            : Pedro henrique augustiNo
            ; Pedro Henrique Augustino  -- fix
            
            : joão baldo de albuquerque
            ; João Baldo de Albuquerque -- fix

            : RIVALDO VIANA DA CRUZ
            ; Rivaldo Viana da Cruz     -- fix

            : Eveline da Silva Bastos
            ; Eveline da Silva Bastos   -- ok
            
            :end
        ]

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            ] enter the names of those approved below ('end' to close)

            : Pedro henrique augustiNo
            ; Pedro Henrique Augustino      -- fix

            : joão baldo de albuquerque
            ; Joao Baldo de Albuquerque     -- fix

            : RIVALDO VIANA DA CRUZ
            ; Rivaldo Viana da Cruz         -- fix

            : Eveline da Silva Bastos
            ; Eveline da Silva Bastos       -- ok

            : end

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

bool getIfAnyCorrectionsHaveBeenMadeToThis(char*);

int main()
{
    auto fullName
        = new char[80];

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "] enter the names of those approved below ('end' to close)" << endl;

    cout << endl;


    while (true)
    {
        cout << ": ";
        cin
            .getline(fullName, 80);

        if (*(fullName + 0) == 'e'
            &&
            *(fullName + 1) == 'n'
            &&
            *(fullName + 2) == 'd')
        {
            break;
        }

        if (getIfAnyCorrectionsHaveBeenMadeToThis(fullName))
        {
            cout << "; " << fullName << " \t-- fix" << endl;
        }
        else
        {
            cout << "; " << fullName << " \t-- ok" << endl;
        }

        cout << endl;

        delete[] fullName;

        fullName
            = new char[80];
    }

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    delete[] fullName;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}

bool getIfAnyCorrectionsHaveBeenMadeToThis(char* p_fullName)
{
    auto value
        = false;

    for (auto i = 0; *(p_fullName + i) != '\x00'; i++)
    {
        if (i == 0)
        {
            if (islower(*(p_fullName + i)))
            {
                *(p_fullName + i)
                    = toupper(*(p_fullName + i));

                value
                    = true;
            }
        }
        else
        {
            if (islower(*(p_fullName + i)))
            {
                if (*(p_fullName + (i - 1)) == '\x20')
                {
                    if (*(p_fullName + i) == 'd'
                        &&
                        (
                        *(p_fullName + (i + 1)) == 'a'
                        ||
                        *(p_fullName + (i + 1)) == 'A'
                        ||
                        *(p_fullName + (i + 1)) == 'e'
                        ||
                        *(p_fullName + (i + 1)) == 'E'
                        ))
                    {
                        continue;
                    }

                    *(p_fullName + i)
                        = toupper(*(p_fullName + i));

                    value
                        = true;
                }
            }
            else
            {
                if (*(p_fullName + (i - 1)) != '\x20')
                {
                    if (*(p_fullName + i) == '\x20')
                    {
                        continue;
                    }

                    *(p_fullName + i)
                        = tolower(*(p_fullName + i));

                    value
                        = true;
                }
                else
                {
                    if (*(p_fullName + i) == 'D'
                        &&
                        (
                        *(p_fullName + (i + 1)) == 'a'
                        ||
                        *(p_fullName + (i + 1)) == 'A'
                        ||
                        *(p_fullName + (i + 1)) == 'e'
                        ||
                        *(p_fullName + (i + 1)) == 'E'
                        ))
                    {
                        *(p_fullName + i)
                            = tolower(*(p_fullName + i));

                        value
                            = true;

                        continue;
                    }
                }
            }
        }
    }

    return value;
}
