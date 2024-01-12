/*
    [ description of the third learning exercise ] :
        - A school wants to hold an interscholastic competition
        with its students. the school office has set up a text file
        with a list of the students interested in taking part in the
        competition. the list contains the student's name and a code
        indicating the shift (morning or afternoon) and grade (6th, 7th
        or 8th), as in the example below:

        ]
            Anita Torcato       M8
            Bárbara Borja       A6
            Estevan Prado       A7
            Eudes Salvado       M6
            Geovana Casta       M7
            Pedro Vieira        A7
            Marcela Arantes     M6
            Vânia Horta         A8
            Óscar Neiva         M7
            Amélia Reino        M8
            Cláudio Reine       A6
            Fábia Candeias      A8
        ]

        create a struct represent a student, read the information
        from the file and store it in a array of students. then use
        a loops and conditional tests to sort and display the students
        grouped by shift and grade, as in the example below:

        ]
            morning 6th grade
            ----------------------
            Eudes Salvado       M6
            Marcela Arantes     M6

            morning 7th grade
            ----------------------
            Geovana Castro      M7
            Óscar Neiva         M7

            morning 8th grade
            ----------------------
            Anita Torcato       M8
            Amélia Reino        M8

            afternoon 6th grade
            ----------------------
            Bárbara Borja       A6
            Cláudio Reine       A6

            afternoon 7th grade
            ----------------------
            Estevam Prado       A7
            Pedro Vieira        A7

            afternoon 7th grade
            ----------------------
            Vânia Horta         A8
            Fábia Candeias      A8
        ]

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            ] enter the name of the file containing the list of competitors
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            : students.txt

            -

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            ] morning 6th grade - - - - - - - - - - - - - - - - - - - - - -
            - Eudes Salvado
                                                                     M6;
            - Marcela Arantes
                                                                     M6;
            ] morning 7th grade - - - - - - - - - - - - - - - - - - - - - -
            - Geovana Casta
                                                                     M7;
            - Óscar Neiva
                                                                     M7;
            ] morning 8th grade - - - - - - - - - - - - - - - - - - - - - -
            - Anita Torcato
                                                                     M8;
            - Amélia Reino
                                                                     M8;



            ] afternoon 6th grade - - - - - - - - - - - - - - - - - - - - -
            - Bárbara Borja
                                                                     A6;
            - Cláudio Reine
                                                                     A6;
            ] afternoon 7th grade - - - - - - - - - - - - - - - - - - - - -
            - Estevan Prado
                                                                     A7;
            - Pedro Vieira
                                                                     A7;
            ] afternoon 8th grade - - - - - - - - - - - - - - - - - - - - -
            - Vânia Horta
                                                                     A8;
            - Fábia Candeias
                                                                     A8;

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <fstream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;

using std::vector;

using std::ifstream;

using std::streamsize;
using std::numeric_limits;

struct st_student
{
    enum class shifts
    {
        none,
        morning,
        afternoon,
    };

    enum class grades
    {
        none,
        _6th,
        _7th,
        _8th,
        _9th,
    };

    char name[32];
    shifts current_shift;
    grades current_grade;
};

char* get_student_name(char*);
st_student::shifts get_student_shift(char*);
st_student::grades get_student_grade(char*);

int main()
{
    auto file
        = new char[32];

    auto has_grade
        = new bool[2][4]
        {
            {
                false, /* 6th */
                false, /* 7th */
                false, /* 8th */
                false, /* 9th */
            },
            {
                false, /* 6th */
                false, /* 7th */
                false, /* 8th */
                false, /* 9th */
            },
        };

    auto morning_students
        = vector<st_student>();

    auto afternoon_students
        = vector<st_student>();

    auto istream
        = ifstream{};

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "] enter the name of the file containing the list of competitors" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << ": ";
    cin >> file;

    cout << endl;
    cout << "-" << endl;
    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    
    cout << endl;
    
    istream
        .open(file);

    if (istream.is_open())
    {
        do
        {
            auto buffer
                = new char[64];
            
            istream
                .getline(buffer, 64);

            if (*(buffer + 0) == '<')
            {
                istream
                    .getline(buffer, 64);
                istream
                    .getline(buffer, 64);

                delete[] buffer;

                continue;
            }

            auto student
                = st_student
                {
                    {},
                    get_student_shift(buffer),
                    get_student_grade(buffer),
                };

            strcpy(student.name,
                   get_student_name(buffer));

            switch (student.current_shift)
            {
                case st_student::shifts::morning:
                {
                    morning_students.push_back(student);
                }
                break;
                case st_student::shifts::afternoon:
                {
                    afternoon_students.push_back(student);
                }
                break;
            }

            delete[] buffer;

        } while (!istream.eof());
    }
    else
    {
        cout << "- error when trying to open the file: \'" << file << "\';" << endl;
    }

    istream
        .close();

    for (auto i = 0; i < morning_students.size(); i++)
    {
        has_grade[0][(int)(morning_students.at(i).current_grade) - 1]++;
    }

    for (auto i = 0; i < afternoon_students.size(); i++)
    {
        has_grade[1][(int)(afternoon_students.at(i).current_grade) - 1]++;
    }

    system("chcp 1252 > nul");

    /*
        morning students
    */

    for (auto i = 6; i <= 9; i++)
    {
        if (has_grade[0][i - 6] != true)
        {
            continue;
        }

        cout << "] morning " << i <<"th grade - - - - - - - - - - - - - - - - - - - - - -" << endl;

        for (auto& student : morning_students)
        {
            if ((int)student.current_grade == i-5)
            {
                cout << "- " << student.name << endl;
                cout << "\t\t\t\t\t\t\t M" << i << ";" << endl;
            }
        }
    }

    cout << endl;
    cout << endl;
    cout << endl;

    /*
        afternoon students
    */

    for (auto i = 6; i <= 9; i++)
    {
        if (has_grade[1][i - 6] != true)
        {
            continue;
        }

        cout << "] afternoon " << i << "th grade - - - - - - - - - - - - - - - - - - - - -" << endl;

        for (auto& student : afternoon_students)
        {
            if ((int)student.current_grade == i - 5)
            {
                cout << "- " << student.name << endl;
                cout << "\t\t\t\t\t\t\t A" << i << ";" << endl;
            }
        }
    }

    cout << endl;
    
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    
    cout << endl;
    
    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;
    
    cout << endl;
    
    delete[] file;

    delete[] has_grade;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}

char* get_student_name(char* buffer)
{
    char full_name[64]{};
    char _1th_name[32]{};
    char _2th_name[32]{};

    auto i
        = int{};

    for (auto j = 0; ; j++)
    {
        *(_1th_name + j)
            = *(buffer + (i++));

        if (*(buffer + i) == '\x20'
            ||
            *(buffer + i) == '\x09')
        {
            break;
        }
    }

    strcat(full_name, _1th_name);

    for (auto j = 0; ; j++)
    {
        *(_2th_name + j)
            = *(buffer + (i++));

        if (*(buffer + i) == '\x20'
            ||
            *(buffer + i) == '\x09')
        {
            break;
        }
    }

    strcat(full_name, _2th_name);

    return full_name;
}

st_student::shifts get_student_shift(char* buffer)
{
    auto shift
        = st_student::shifts{};

    switch (*(buffer + (strlen(buffer) - 2)))
    {
        case 'M':
        {
            shift
                = st_student::shifts::morning;
        }
        break;
        case 'A':
        {
            shift
                = st_student::shifts::afternoon;
        }
        break;
        default:
        {
            shift
                = st_student::shifts::none;
        }
        break;
    }

    return shift;
}

st_student::grades get_student_grade(char* buffer)
{
    auto grade
        = st_student::grades{};

    switch (*(buffer + (strlen(buffer) - 1)))
    {
        case '6':
        {
            grade
                = st_student::grades::_6th;
        }
        break;
        case '7':
        {
            grade
                = st_student::grades::_7th;
        }
        break;
        case '8':
        {
            grade
                = st_student::grades::_8th;
        }
        break;
        case '9':
        {
            grade
                = st_student::grades::_9th;
        }
        break;
        default:
        {
            grade
                = st_student::grades::none;
        }
        break;
    }

    return grade;
}
