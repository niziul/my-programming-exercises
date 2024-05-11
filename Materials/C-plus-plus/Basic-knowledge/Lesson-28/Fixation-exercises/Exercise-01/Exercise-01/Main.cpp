/*
    [ description of the first fixation exercise ] :
        - Write a function that keeps a counter of how many times
        it has been called. the function should display the value
        of this counter at each call. for example, if the function
        is called 3 times, the program output should be as shown below:

        ]
            #1 function call;
            #2 function call;
            #3 function call;
        ]

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - <@>

            ; #1 call function
            ; #2 call function
            ; #3 call function

            <@> - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

void function(void);

int main()
{
    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    function();
    function();
    function();

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}

void function(void)
{
    auto static counter
        = 1;

    cout << "; #" << counter++ << " call function" << endl;
}
