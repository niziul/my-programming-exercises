/*
    [ description of the second fixation exercise ] :
        - Rewrite the program from the previous question using
        ordinary 'const char*' vectors for the strings representing
        the months, and use a struct whose only member is a static double
        vector for the expenses.

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            [ enter the expenses for the month of 'march' below
            : 732

            [ enter the expenses for the month of 'april' below
            : 431

            [ enter the expenses for the month of 'june' below
            : 654

            [ enter the expenses for the month of 'july' below
            : 324


            -

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            ] expenses
            {
                    march: US$732;
                    april: US$431;
                    june: US$654;
                    july: US$324;
            }

            [ total expenses: US$2141;

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

auto const months
= new char[4][7]
{
    "march\0",
    "april\0",
    "june\0",
    "july\0",
};

struct st_expense
{
    double* value;
};

void fill(double*, const int);

void show(const double*, const int);

int main()
{
    auto expenses
        = st_expense
        {
            new double[4],
        };

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    fill(expenses.value, 4);

    cout << endl;
    cout << "-" << endl;
    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    show(expenses.value, 4);

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    delete[] months;
    delete[] expenses.value;

    return 0;
}

void fill(double* p_vector, const int size)
{
    for (auto i = 0; i < size; i++)
    {
        cout << "[ enter the expenses for the month of \'" << months[i] << "\' below" << endl;
        cout << ": ";
        cin >> *(p_vector + i);

        cout << endl;
    }
}

void show(const double* cp_vector, const int size)
{
    auto total
        = double{};

    cout << "] expenses" << endl;

    cout << '{' << endl;

    for (auto i = 0; i < size; i++)
    {
        cout << "\t" << months[i] << ": US$" << *(cp_vector + i) << ";" << endl;
        total
            += *(cp_vector + i);
    }

    cout << '}' << endl;

    cout << endl;

    cout << "[ total expenses: US$" << total << ";" << endl;
}