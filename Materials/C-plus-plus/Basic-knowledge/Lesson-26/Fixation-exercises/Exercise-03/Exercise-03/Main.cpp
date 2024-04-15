/*
    [ description of the third fixation exercise ] :
        - Complete the skeleton program below, providing
        the necessary functions.

        ]
            #include <iostream>

            using namespace std;

            const int SIZE_NAME = 30;

            struct student
            {
                char name[SIZE_NAME];
                int level;
            };

            int getStudentInformation(student vs[], int n);

            void displayStudentInformation(student a);

            void displayStudentInformation(const student* pa);

            void displayStudentInformation(const student va[], int n);

            int main()
            {
                cout << "class size: ";
                int size;
                cin >> size;

                cin.ignore();

                student * ptr = new student[size];
                int subscribes = getStudentInformation(ptr, size);
                for (auto i = 0; i < subscribes; ++i)
                {
                    displayStudentInformation(ptr[i]);
                    displayStudentInformation(&ptr[i]);
                }
                displayStudentInformation(ptr, subscribes);
    
                delete[] ptr;
                cout << "Done!\n";

                return 0;
            }
        ]

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            ] enter the class size below
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            : 2

            ] student - '1'

            ;name : dope
            ;level: 3

            ] student - '2'

            ;name : nope
            ;level: 4


            -

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] void displayStudentInformation(const st_student);
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            ] student - '1';
            {
                    'dope'
            } - name
            {
                    '3'
            } - level

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] void displayStudentInformation(const st_student*);
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            ] student - '1';
            {
                    'dope'
            } - name
            {
                    '3'
            } - level

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] void displayStudentInformation(const st_student*, const int);
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            ] student - '1';
            {
                    'dope'
            } - name
            {
                    '3'
            } - level

            ] student - '2';
            {
                    'nope'
            } - name
            {
                    '4'
            } - level


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

struct st_student
{
    char name[30];
    int level;
};

int getStudentInformation(st_student*, const int);

void displayStudentInformation(const st_student);

void displayStudentInformation(const st_student*);

void displayStudentInformation(const st_student*, const int);

int main()
{
    auto size
        = int{};

    auto subscribes
        = int{};

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;
    
    cout << endl;

    cout << "] enter the class size below" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << ": ";
    cin >> size;

    cin
        .ignore();

    cout << endl;

    auto students
        = new st_student[size];

    subscribes
        = getStudentInformation(students, size);
    
    cout << endl;
    cout << "-" << endl;
    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    
    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] void displayStudentInformation(const st_student);" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    
    cout << endl;

    cout << "] student - '1'" << endl;
    displayStudentInformation(*students);

    cout << endl;
    
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] void displayStudentInformation(const st_student*);" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    cout << "] student - '1'" << endl;
    displayStudentInformation(students);

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] void displayStudentInformation(const st_student*, const int);" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    displayStudentInformation(students, subscribes);

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    
    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    delete[] students;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}

int getStudentInformation(st_student* p_students, const int size)
{
    auto subscribes
        = int{};

    for (auto i = 0; i < size; i++)
    {
        cout << "] student - \'" << i + 1 << "\'" << endl;

        cout << endl;

        cout << ";name : ";
        cin
            .getline((p_students + i)->name, 30);

        cout << ";level: ";
        cin >> (p_students + i)->level;

        cin
            .ignore();

        cout << endl;

        subscribes++;
    }

    return subscribes;
}

void displayStudentInformation(const st_student c_student)
{
    cout << "{" << endl;
    cout << "\t\'" << c_student.name << "\'" << endl;
    cout << "} - name" << endl;
    cout << "{" << endl;
    cout << "\t\'" << c_student.level << "\'" << endl;
    cout << "} - level" << endl;
}

void displayStudentInformation(const st_student* p_student)
{
    cout << "{" << endl;
    cout << "\t\'" << p_student->name << "\'" << endl;
    cout << "} - name" << endl;
    cout << "{" << endl;
    cout << "\t\'" << p_student->level << "\'" << endl;
    cout << "} - level" << endl;
}

void displayStudentInformation(const st_student* p_student, const int size)
{
    for (auto i = 0; i < size; i++)
    {
        cout << "] student - \'" << i + 1 << "\';" << endl;
        cout << "{" << endl;
        cout << "\t\'" << (p_student + i)->name << "\'" << endl;
        cout << "} - name" << endl;
        cout << "{" << endl;
        cout << "\t\'" << (p_student + i)->level << "\'" << endl;
        cout << "} - level" << endl;

        cout << endl;
    }
}
