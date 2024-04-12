/*
    [ description of the first fixation exercise ] :
        - Consider the code below:

        ]
            #include <iostream>
            #include <string>
            #include <array>

            using std::cin;
            using std::cout;
            using std::endl;

            using std::array;
            using std::string;

            const array<string, 4> months
            =
            {
                "march",
                "april",
                "june",
                "july",
            };

            void fill(array<double, 4>*);

            void show(array<double, 4>);

            int main()
            {
                array<double, 4> expenses;

                fill(&expenses);
                show(expenses);

                return 0;
            }

            void fill(array<double, 4>* p_vector)
            {
                for (auto i = 0; i < p_vector->size(); i++)
                {
                    cout << "Enter the expenses for the month of \'" << months[i] << "\' below" << endl;
                    cout << ": ";
                    cin >> p_vector->at(i);
                }
            }

            void show(array<double, 4> c_vector)
            {
                auto total
                    = double{};

                cout << "\nExpenses\n";

                for (auto i = 0; i < c_vector.size(); i++)
                {
                    cout << months[i] << ": US$" << c_vector[i] << endl;
                    total
                        += c_vector[i];
                }

                cout << "Total expenses: US$" << total << endl;
            }
        ]

        make a version of the program that uses common vectors of
        'const char*' for the strings representing the months, and
        uses a common vector of 'double' for the expenses.

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            [ enter the expenses for the month of 'march' below
            : 431

            [ enter the expenses for the month of 'april' below
            : 654

            [ enter the expenses for the month of 'june' below
            : 345

            [ enter the expenses for the month of 'july' below
            : 764


            -


            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            ] expenses
            {
                    march: US$431;
                    april: US$654;
                    june: US$345;
                    july: US$764;
            }

            [ total expenses: US$2194;

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#include <iostream>
#include <string>
#include <array>

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

void fill(double*, const int);

void show(const double*, const int);

int main()
{
    auto expenses
        = new double[4];

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;
    
    fill(expenses, 4);

    cout << endl;
    cout << "-" << endl;
    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    show(expenses, 4);

    cout << endl;
    
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    
    cout << endl;
    
    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    delete[] months;
    delete[] expenses;

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
