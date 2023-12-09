/*
    [ description of the third fixation exercise ] :
        - In a company, an employee may be known by their name, their job
        title or their nickname. Write a program that can list employees by
        name, job title, nickname or employee preference. Use the struct below
        as a basis:

        ]
            struct bop
            {
                char name[50];
                char jtitle[50];
                char nickname[50];
                int preference;
            };
        ]

        In the program, create a small vector of these struts and initialize
        it to values of your choice. Maker the program run a loop that allows
        the user to select one of the alternatives:

        ]
            a. show by name;
            b. show by job title;
            c. show by nickname;
            d. show by preference;
            e. exit;
        ]
        
        Note that 'show by preference' does not mean showing the preference field
        of the struct; it means showing the field corresponding to the number stored
        with the preference. For example, if John's preference is '1' and Joseph's is
        '2', then choosing option 'd' would display John's job title and Joseph's nickname.
        The program should run similar to the example below:

        ]
            list of employees

            a. show by name;
            b. show by job title;
            c. show by nickname;
            d. show by preference;
            e. exit;

            enter your choice: a

            José;
            Mark;
            John;
            Carlos;

            enter your choice: d

            Paquito;
            Doorman;
            Security;
            Carlos;

            enter your choice: e

            Bye!
        ]

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] list of employees
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            - a) show by name;
            - b) show by job title;
            - c) show by nickname;
            - d) show by preference;
            - e) exit;

            ] enter your choice below
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            : a

            [ 'Albert';
            [ 'Bradford';
            [ 'Frederick';

            ] enter your choice below
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            : d

            [ 'Al';
            [ 'Doorman';
            [ 'Engineer';

            ] enter your choice below
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            : e


            - bye.

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

struct employee_id
{
    char name[50];
    char jtitle[50];
    char nickname[50];
    int preference;
};

int main()
{
    auto choice
        = char{};

    auto employees
        =
        {
            employee_id
            {
                "Albert",
                "Security",
                "Al",
                3
            },
            employee_id
            {
                "Bradford",
                "Doorman",
                "Brad",
                2
            },
            employee_id
            {
                "Frederick",
                "Engineer",
                "Fred",
                2
            }
        };

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;
    
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] list of employees" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    
    cout << endl;

    cout << "- a) show by name;" << endl;
    cout << "- b) show by job title;" << endl;
    cout << "- c) show by nickname;" << endl;
    cout << "- d) show by preference;" << endl;
    cout << "- e) exit;" << endl;

    cout << endl;

    cout << "] enter your choice below" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << ": ";
    cin >> choice;

    cout << endl;

    while (tolower(choice) != 'e')
    {
        switch (tolower(choice))
        {
            case 'a':
            {
                for (auto& employee : employees)
                {
                    cout << "[ \'" << employee.name << "\';" << endl;
                }
            }
            break;
            case 'b':
            {
                for (auto& employee : employees)
                {
                    cout << "[ \'" << employee.jtitle << "\';" << endl;
                }
            }
            break;
            case 'c':
            {
                for (auto& employee : employees)
                {
                    cout << "[ \'" << employee.nickname << "\';" << endl;
                }
            }
            break;
            case 'd':
            {
                for (auto& employee : employees)
                {
                    switch (employee.preference)
                    {
                        case 1:
                        {
                            cout << "[ \'" << employee.name << "\';" << endl;
                        }
                        break;
                        case 2:
                        {
                            cout << "[ \'" << employee.jtitle << "\';" << endl;
                        }
                        break;
                        case 3:
                        {
                            cout << "[ \'" << employee.nickname << "\';" << endl;
                        }
                        break;
                    }
                }
            }
            break;
            default:
            {
                cout << "- error! your choice does not match any of the options shown above. try again." << endl;
            }
            break;
        }

        cout << endl;

        cout << "] enter your choice below" << endl;
        cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
        cout << ": ";
        cin >> choice;

        cout << endl;
    }

    cout << endl;

    cout << "- bye." << endl;

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;
    
    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}