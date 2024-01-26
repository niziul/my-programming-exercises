/*
    [ description of the first learning exercise ] :
        - Create program that stores the first 100 natural numbers
        at the same time, in a text file and in a binary file. compare
        the sizes of the files and explain how the types chosen to store
        the numbers can make the binary file smaller or larger than the text
        file.

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            [ 1
            [ 2
            [ 3
            [ 4
            [ 5
            [ 6
            [ 7
            [ 8
            [ 9
            [ 10
            [ 11
            [ 12
            [ 13
            [ 14
            [ 15
            [ 16
            [ 17
            [ 18
            [ 19
            [ 20
            [ 21
            [ 22
            [ 23
            [ 24
            [ 25
            [ 26
            [ 27
            [ 28
            [ 29
            [ 30
            [ 31
            [ 32
            [ 33
            [ 34
            [ 35
            [ 36
            [ 37
            [ 38
            [ 39
            [ 40
            [ 41
            [ 42
            [ 43
            [ 44
            [ 45
            [ 46
            [ 47
            [ 48
            [ 49
            [ 50
            [ 51
            [ 52
            [ 53
            [ 54
            [ 55
            [ 56
            [ 57
            [ 58
            [ 59
            [ 60
            [ 61
            [ 62
            [ 63
            [ 64
            [ 65
            [ 66
            [ 67
            [ 68
            [ 69
            [ 70
            [ 71
            [ 72
            [ 73
            [ 74
            [ 75
            [ 76
            [ 77
            [ 78
            [ 79
            [ 80
            [ 81
            [ 82
            [ 83
            [ 84
            [ 85
            [ 86
            [ 87
            [ 88
            [ 89
            [ 90
            [ 91
            [ 92
            [ 93
            [ 94
            [ 95
            [ 96
            [ 97
            [ 98
            [ 99
            [ 100

            [ all of the above numbers have been successfully saved.

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```

        R: the reason is the number of bits, since with binary files all the
        bits are stored in the file, unlike text files which convert the values
        to 'char'.
*/

#include <iostream>
#include <fstream>

using std::cin;
using std::cout;
using std::endl;

using std::ios_base;

using std::ifstream;
using std::ofstream;

using std::streamsize;
using std::numeric_limits;

void write_the_natural_number_to_this_text_file(const char*, short&);
void write_the_natural_number_to_this_binary_file(const char*, short&);

int main()
{
    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    for (auto i = (short)1; i <= 100; i++)
    {
        cout << "[ " << i << endl;

        write_the_natural_number_to_this_text_file("natural_numbers.txt", i);
        write_the_natural_number_to_this_binary_file("natural_numbers.bin", i);
    }

    cout << endl;

    cout << "[ all of the above numbers have been successfully saved." << endl;

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}

void write_the_natural_number_to_this_text_file(const char* file, short& value)
{
    auto fout
        = ofstream{};

    fout
        .open(file, ios_base::in
                    |
                    ios_base::app);

    if (fout.is_open())
    {
        fout << value;

        fout
            .clear();
    }
}

void write_the_natural_number_to_this_binary_file(const char* file, short& value)
{
    auto fout
        = ofstream{};

    fout
        .open(file, ios_base::in
                    |
                    ios_base::app
                    |
                    ios_base::binary);

    if (fout.is_open())
    {
        fout
            .write((char*)&value, sizeof(short));

        fout
            .close();
    }
}
