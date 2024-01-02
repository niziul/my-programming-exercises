/*
    [ description of the first review exercise ] :
        - Considering the text file shown, what does the code
        snippet below do?

        ]
            ´txt
              Files can be read by character, words or line.
            ´

            #include <iostream>
            #include <fstream>

            using namespace std;

            int main()
            {
                ifstream fin;
                fin.open("introduction.txt");

                if (!fin.is_open())
                {
                    cout << "the opening of the program failed!" << endl;
                    cout << "program closing." << endl;
        
                    exit(EXIT_FAILURE);
                }

                char ch;
                fin >> ch;
                fin.close();

                cout << ch << endl;

                return 0;
            }
        ]

        R: stores and displays the first char of the file if it the file is
        opened successfully.

        -

        modify the program to read from the text file:
        
        a) the eighth char;
        b) a word;
        c) the fifth word;
        d) a line;

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - read_the_eight_char_of()
            [ n
            -
            - read_the_fifth_word_of()
            [ by
            -
            - read_a_word_of()
            [ Files
            -
            - read_a_line_of()
            [ Files can be read by character, words or line.
            -

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#include <iostream>
#include <fstream>

using std::cin;
using std::cout;
using std::endl;

using std::ifstream;

using std::streamsize;
using std::numeric_limits;

void read_the_eight_char_of(ifstream* file);
void read_the_fifth_word_of(ifstream* file);
void read_a_word_of(ifstream* file);
void read_a_line_of(ifstream* file);

int main()
{
    auto fstream
        = ifstream{};

    fstream
        .open("introduction.txt");

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    if (fstream.is_open())
    {
        cout << "- read_the_eight_char_of()" << endl;

        cout << "[ ";
        read_the_eight_char_of(&fstream);

        cout << "-" << endl;

        cout << "- read_the_fifth_word_of()" << endl;

        cout << "[ ";
        read_the_fifth_word_of(&fstream);

        cout << "-" << endl;

        cout << "- read_a_word_of()" << endl;

        cout << "[ ";
        read_a_word_of(&fstream);

        cout << "-" << endl;

        cout << "- read_a_line_of()" << endl;

        cout << "[ ";
        read_a_line_of(&fstream);

        cout << "-" << endl;
    }
    else
    {
        cout << "- the opening of the program failed!" << endl;
    }

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    if (fstream.is_open())
    {
        exit(EXIT_SUCCESS);
    }
    else
    {
        exit(EXIT_FAILURE);
    }

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}

void read_the_eight_char_of(ifstream* file)
{
    if (file->is_open())
    {
        file->close();
    }

    file->open("introduction.txt");

    auto input
        = char{};

    for (auto i = 0; i < 8; ++i)
    {
        *file >> input;

        if (i == 7)
        {
            cout << input << endl;
        }
    }

    file->close();
}

void read_the_fifth_word_of(ifstream* file)
{
    if (file->is_open())
    {
        file->close();
    }

    file->open("introduction.txt");

    auto input
        = new char[32];

    for (auto i = 0; i < 5; ++i)
    {
        *file >> input;

        if (i == 4)
        {
            cout << input << endl;
        }
    }

    delete[] input;

    file->close();
}

void read_a_word_of(ifstream* file)
{
    if (file->is_open())
    {
        file->close();
    }

    file->open("introduction.txt");

    auto input
        = new char[32];

    *file >> input;

    cout << input << endl;

    delete[] input;

    file->close();
}

void read_a_line_of(ifstream* file)
{
    if (file->is_open())
    {
        file->close();
    }

    file->open("introduction.txt");

    auto input
        = char{};

    do
    {
        cout << (input = file->get());
    }
    while (file->good()
           &&
           input != '\n');

    file->close();
}
