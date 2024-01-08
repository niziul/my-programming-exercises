/*
    [ description of the fourth fixation exercise ] :
        - Write a program that displays the name used to identify the
        'C' disk drive on the computer and the volume's serial number.

        tip: this information is displayed on the console (command prompt)
        when you run the vol (or dir) command. within your program, use the
        system function to execute the command vol and redirect it to a text
        file and then extract the information from the file: system("vol >> vol.txt")

    [ output ] :
        ```
             <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

             ] disk and serial number
             - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

              Volume in drive G is ***************
              Volume Serial Number is ***************
             
             <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
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

int main()
{
    auto istream
        = ifstream{};

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "] disk and serial number" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    system("vol > vol.txt");

    istream
        .open("vol.txt");

    if (istream.is_open())
    {
        do
        {
            auto buffer
                = char{};

            istream
                .get(buffer);

            cout << buffer;

        } while (!istream.eof());
    }
    else
    {
        cout << "- erro." << endl;
    }

    istream
        .close();
    
    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}