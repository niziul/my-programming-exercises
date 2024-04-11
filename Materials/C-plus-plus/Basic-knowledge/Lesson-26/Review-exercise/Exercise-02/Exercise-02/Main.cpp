/*
    [ description of the second review exercise ] :
        - Consider the following struct statement:

        ]
            struct applicant
            {
                char name[30];
                int grade;
            }
        ]

        a: write a function that takes a applicant struct
        as an argument and displays its contents;

        b: write a function that receives the address of a
        applicant and displays the contents of the struct;

        c: write a function that receives a vector of applicants
        and display all the contents of the vector.

        d: is there a difference in the signature of the functions
        used to solve items 'b' and 'c'?
        - yes, the additional argument for the size of the vector.

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] void displayApplicantInformation(const st_applicant);
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] applicant - 01

            {
                    'mike';
            }
            {
                    '7';
            }

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] void displayApplicantInformation(const st_applicant*);
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] applicant - 01

            {
                    'mike';
            }
            {
                    '7';
            }

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] void displayApplicantInformation(const st_applicant*, const int);
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            ] applicant - 1
            {
                    'mike';
            }
            {
                    '7';
            }
            ] applicant - 2
            {
                    'dabi';
            }
            {
                    '3';
            }
            ] applicant - 3
            {
                    'nicole';
            }
            {
                    '9';
            }

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

struct st_applicant
{
    char name[30];
    int grade;
};

void displayApplicantInformation(const st_applicant);
void displayApplicantInformation(const st_applicant*);
void displayApplicantInformation(const st_applicant*, const int);

int main()
{
    auto applicants
        =
        {
            st_applicant
            {
                "mike",
                7,
            },
            st_applicant
            {
                "dabi",
                3,
            },
            st_applicant
            {
                "nicole",
                9,
            },
        };

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] void displayApplicantInformation(const st_applicant);" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << "] applicant - 01" << endl;

    cout << endl;

    displayApplicantInformation(*applicants.begin());

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] void displayApplicantInformation(const st_applicant*);" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << "] applicant - 01" << endl;

    cout << endl;

    displayApplicantInformation(applicants.begin());

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] void displayApplicantInformation(const st_applicant*, const int);" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    displayApplicantInformation(applicants.begin(), 3);

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}

void displayApplicantInformation(const st_applicant c_applicant)
{
    cout << '{' << endl;
    cout << "\t\'" << c_applicant.name << "\';" << endl;
    cout << '}' << endl;
    cout << '{' << endl;
    cout << "\t\'" << c_applicant.grade << "\';" << endl;
    cout << '}' << endl;
}

void displayApplicantInformation(const st_applicant* p_applicant)
{
    cout << '{' << endl;
    cout << "\t\'" << p_applicant->name << "\';" << endl;
    cout << '}' << endl;
    cout << '{' << endl;
    cout << "\t\'" << p_applicant->grade << "\';" << endl;
    cout << '}' << endl;
}

void displayApplicantInformation(const st_applicant* p_applicants, const int size)
{
    for (auto i = 0; i < size; i++)
    {
        cout << "] applicant - " << i + 1 << endl;
        cout << '{' << endl;
        cout << "\t\'" << (p_applicants + i)->name << "\';" << endl;
        cout << '}' << endl;
        cout << '{' << endl;
        cout << "\t\'" << (p_applicants + i)->grade << "\';" << endl;
        cout << '}' << endl;
    }
}