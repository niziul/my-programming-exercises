/*
    [ description of the first review exercise ] :
        - Build a function to display error messages from
        a system. some messages are aimed at programmers, and
        in this case they should be displayed simply, in just
        one line of text.

        ]
            Error S2042: file operation.sys not found!
        ]

        other messages are directed at system users, in which
        case they must be memorized and displayed in several lines
        of text.

        ]
            the operation could not be completed!

            some problem was detected in the system that made it impossible
            to complete the task. contact the system developer
            at dev@svs.com and send the error report below.

            -----------------------------------------
            system error report
            -----------------------------------------
            code: S2042
            description: operation.sys file not found!
        ]

        instead of building an 'if' to select how to display the message,
        build a 'displayError' function that takes the error number, a description
        of the error and a display function as parameters. build display functions
        to reflect the two scenarios described above.

        the main program should look like the code below:
        
        ]
            #include <iostream>

            using namespace std;

            // build the displayError function

            // build the user function

            // build the programmer function

            int main()
            {
                displayError(1245,
                             "failure to read the file",
                             user);

                displayError(4521,
                             "unexpected startup erro",
                             programmer);

                return 0;
            }
        ]

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] userFunction();
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            ; the operation could not be completed!

            ; some problem was detected in the system that made it impossible
            ; to complete the task.contact the system developer
            ; at dev@svs.com and send the error report below.

            {
            system error report

            - code: '1245';
            - description: 'failure to read the file';
            }

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] programmerFunction();
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            - error '4521': unexpected startup erro;

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

void displayError(const int, const char*, void(*pt_function)(const int, const char*));

void userFunction(const int, const char*);

void programmerFunction(const int, const char*);

int main()
{
    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;
    
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] userFunction();" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    displayError(1245,
                 "failure to read the file",
                 userFunction);

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] programmerFunction();" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    displayError(4521,
                 "unexpected startup erro",
                 programmerFunction);

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}

void displayError(const int cc_erroCode, const char* cp_string, void(*pt_function)(const int, const char*))
{
    (*pt_function)(cc_erroCode, cp_string);
}

void userFunction(const int cc_erroCode, const char* cp_string)
{
    cout << "; the operation could not be completed!" << endl;

    cout << endl;

    cout << "; " << "some problem was detected in the system that made it impossible" << endl;
    cout << "; " << "to complete the task.contact the system developer" << endl;
    cout << "; " << "at dev@svs.com and send the error report below." << endl;

    cout << endl;
    cout << "{" << endl;
    cout << "system error report" << endl;

    cout << endl;

    cout << "- code: \'" << cc_erroCode << "\';" << endl;
    cout << "- description: \'" << cp_string << "\';" << endl;
    cout << "}" << endl;
    cout << endl;
}

void programmerFunction(const int cc_erroCode, const char* cp_string)
{
    cout << "- error \'" << cc_erroCode << "\': " << cp_string << ";" << endl;
}
