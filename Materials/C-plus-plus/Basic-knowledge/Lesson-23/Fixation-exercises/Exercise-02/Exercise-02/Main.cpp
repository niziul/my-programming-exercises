/*
    [ description of the second fixation exercise ] :
        - Build a program tht reads a text file containing the name and
        the three grades of several students (an indefinite number of students).
        write in another text file the student's name and status (pass, fourth exam
        or fail).

        ]
            ```txt
                wilson 8.2 7.5 5.0
                silvio 3.2 7.5 7.2
                luis 6.0 7.0 9.0
                pedro 3.0 3.0 1.0
            ```
        ]

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] assessing the students situation
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            [ amount of students found in the file: '4';

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            - - - - - 'wilson'

            [ result    : 'fourth exam';

            - - - - - 'silvio'

            [ result    : 'fourth exam';

            - - - - - 'luis'

            [ result    : 'pass';

            - - - - - 'pedro'

            [ result    : 'fail';


            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#include <iostream>
#include <fstream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;

using std::vector;

using std::ifstream;
using std::ofstream;

using std::streamsize;
using std::numeric_limits;

struct st_student
{
    struct st_grades
    {
        float exams[3];
    };
    struct st_status
    {
        enum type
        {
            none = 0,
            pass = 1,
            fail = 2,
            fourth_exam = 3,
        };

        type result;
    };

    char name[32];
    st_grades grades;
    st_status status;
};

int main()
{
    auto istream
        = ifstream{};

    auto ostream
        = ofstream{};

    auto students_status
        = vector<st_student>();

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] assessing the students situation" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    istream
        .open("students_grades.txt");

    if (istream.is_open())
    {
        do
        {
            auto student
                = st_student{};

            istream >> student.name;
            istream >> student.grades.exams[0];
            istream >> student.grades.exams[1];
            istream >> student.grades.exams[2];

            if (istream.fail())
            {
                istream
                    .clear();

                continue;
            }

            students_status
                .push_back(student);

        } while (!istream.eof());
    }
    else
    {
        cout << "- erro." << endl;
    }

    istream
        .close();

    cout << "[ amount of students found in the file: \'" << students_status.size() << "\';" << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    
    cout << endl;

    ostream
        .open("students_results.txt");

    if (ostream.is_open())
    {
        for (auto& student_status : students_status)
        {
            auto total
                = student_status.grades.exams[0]
                  +
                  student_status.grades.exams[1]
                  +
                  student_status.grades.exams[2];

            auto average
                = total / 3;

            if (average > 7.0)
            {
                student_status.status.result = student_status.status.pass;
                
                continue;
            }

            if (average < 5.0)
            {
                student_status.status.result = student_status.status.fail;

                continue;
            }

            student_status.status.result = student_status.status.fourth_exam;
        }

        for (auto& student_status : students_status)
        {
            cout << "- - - - - \'" << student_status.name << "\'" << endl;

            cout << endl;

            switch (student_status.status.result)
            {
            case 1:
            {
                cout << "[ result    : \'pass\';" << endl;
            }
            break;
            case 2:
            {
                cout << "[ result    : \'fail\';" << endl;
            }
            break;
            case 3:
            {
                cout << "[ result    : \'fourth exam\';" << endl;
            }
            break;
            }

            cout << endl;

            ostream << "- - - - - \'" << student_status.name << "\'" << endl;

            ostream << endl;

            switch (student_status.status.result)
            {
                case 1:
                {
                    ostream << "[ result    : \'pass\';" << endl;
                }
                break;
                case 2:
                {
                    ostream << "[ result    : \'fail\';" << endl;
                }
                break;
                case 3:
                {
                    ostream << "[ result    : \'fourth exam\';" << endl;
                }
                break;
            }

            ostream << endl;
        }
    }
    else
    {
        cout << "- erro." << endl;
    }

    ostream
        .close();

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;
    
    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}