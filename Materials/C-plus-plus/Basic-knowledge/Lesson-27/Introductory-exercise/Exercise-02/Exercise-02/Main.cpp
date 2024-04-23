/*
    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            ] enter below how many lines of code do you need?
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            : 100

            -

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            ] Tom's estimate:
            {
                    - '100' lines of code takes about '15' hour(s);
            }

            ] Pam's estimate:
            {
                    - '100' lines of code takes about '65' hour(s);
            }

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

double tom(const int);
double pam(const int);

void estimate(const int, double(*pf)(const int));

int main()
{
    auto codeLines
        = int{};

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "] enter below how many lines of code do you need?" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << ": ";
    cin >> codeLines;

    cout << endl;
    cout << "-" << endl;
    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;
    
    cout << "] Tom's estimate:" << endl;
    estimate(codeLines, tom);

    cout << endl;

    cout << "] Pam's estimate:" << endl;
    estimate(codeLines, pam);

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}

double tom(const int cc_codeLines)
{
    return 0.15 * cc_codeLines;
}

double pam(const int cc_codeLines)
{
    return 0.65 * cc_codeLines;
}

void estimate(const int cc_codeLines, double(*pf)(const int))
{
    cout << "{" << endl;
    cout << "\t- \'" << cc_codeLines << "\' lines of code takes about \'" << (*pf)(cc_codeLines) << "\' hour(s);" << endl;
    cout << "}" << endl;
}
