/*
    [ description of the first learning exercise ] :
        - Write a program that reads a c++ source code file specified
        by the user. the program must create another file containing the
        code with the following changes:

        + insert a comment at the beginning of the file with the file name;
          
          - filename.cpp

        + insert the following statement at the beginning of the file;

          - #define print cout

        + replace instances of 'cout' with 'print'

        the new file must have the same name as the original file plus
        and '_m'. for example, if the file indicated is called 'test.cpp',
        a file called 'test_m.cpp' must be generated.

        ]
            ```cpp
                #include <iostream>

                using namespace std;

                int main()
                {
                    int num = 5;
                    cout << num << endl;

                    return 0;
                }
            ```
            ```cpp
                // test_m.cpp
                #define print cout
                #include <iostream>

                using namespace std;

                int main()
                {
                    int num = 5;
                    print << num << endl;

                    return 0;
                }
            ```
        ]

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            enter the name of the cpp file below (without the file extension)
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            : test

            -

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            [ file 'test_m.cpp' successfully created!

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <fstream>

using std::cin;
using std::cout;
using std::endl;

using std::ifstream;
using std::ofstream;

using std::streamsize;
using std::numeric_limits;

int main()
{
    auto istream
        = ifstream{};

    auto ostream
        = ofstream{};

    auto file
        = new char[32];

    auto new_file
        = new char[32];

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "enter the name of the cpp file below (without the file extension)" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << ": ";
    cin >> file;

    strcpy(new_file, file);

    cout << endl;
    cout << "-" << endl;
    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    
    cout << endl;

    strcat(file, ".cpp");

    istream
        .open(file);

    if (istream.is_open())
    {
        strcat(new_file, "_m.cpp");

        ostream
            .open(new_file);

        if (ostream.is_open())
        {
            ostream << "//" << new_file << endl;
            ostream << "#define print cout" << endl;

            auto buffer
                = new char[128];

            do
            {
                istream
                    .getline(buffer, 128);

                strcat(buffer, "\n");

                for (auto i = 0; *(buffer + i) != '\n';)
                {
                    if (*(buffer + i) == '\x20')
                    {
                        ostream << *(buffer + (i++));

                        continue;
                    }

                    auto word
                        = new char[32]{};
                    
                    auto index
                        = int{};

                    while (*(buffer + i) != '\x20')
                    {
                        if (*(buffer + i) == '\n')
                        {
                            break;
                        }
                        
                        *(word + (index++))
                            = *(buffer + (i++));
                    }

                    if (strcmp(word, "cout") == 0)
                    {
                        ostream << "print";

                        continue;
                    }

                    if (*(buffer + i) == '\x20')
                    {
                        ostream << word;
                    }
                    else
                    {
                        ostream << word << *(buffer + i);
                    }

                    delete[] word;
                }

            } while (!istream.eof());
            
            delete[] buffer;
        }
        else
        {
            cout << "- error when trying to open the file: \'" << new_file << "\';" << endl;
        }

        ostream
            .close();
    }
    else
    {
        cout << "- error when trying to open the file: \'" << file << "\';" << endl;
    }

    istream
        .close();

    cout << "[ file \'" << new_file << "\' successfully created!" << endl;

    cout << endl;
    
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;
    
    delete[] file;
    delete[] new_file;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}