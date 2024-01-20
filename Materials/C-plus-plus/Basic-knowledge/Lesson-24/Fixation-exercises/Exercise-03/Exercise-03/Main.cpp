/*
    [ description of the third fixation exercise ] :
        - Review exercise 1 of lab 6 (integer types) shows how
        to use escape codes to change the color of the text displayed
        on a terminal. the character sequence "\033[38;5;000;48;5;154m"
        sets the color '000' for the text and '154' for the background.
        considering that the colors are 3-digit values from '000' to '255',
        build a program to read from the user a text with a maximum of '80'
        characters, a code for the text color and a code for the background
        color. save this information in a binary file. the user should have the
        option of saving a new phrase or displaying the phrase already stored via
        a menu, as shown in the example below.

        ]
            ```sample - 01
                colorful messages
                -------------------
                [s]tore
                [d]isplay
                [e]xit
                -------------------
                option: [s]

                your message: happy birthday!
                
                text color: 130
                background color: 038

                colored text has been stored.
            ```
        ]

    [ output ] :
        ```sample - 01
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] colorful message
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            [ s ]tore;
            [ d ]isplay;
            [ e ]xit;

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            ] option: s

            -

            ] message: happy birthday!
            ] foreground color: 177
            ] background color: 0

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            [ the colorful message has been stored.

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```

        ```sample - 02
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] colorful message
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            [ s ]tore;
            [ d ]isplay;
            [ e ]xit;

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            ] option: d

            -

            [ 'happy birthday!'

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```

        ```sample - 03
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] colorful message
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            [ s ]tore;
            [ d ]isplay;
            [ e ]xit;

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            ] option: e

            -

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            [ bye!

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
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

struct st_colorful_message
{
    char message[90];
    unsigned foreground_color;
    unsigned background_color;
};

constexpr auto theme = "\u001b[38;5;209m";
constexpr auto reset = "\u001b[0m";

bool get_colorful_message_in_this_binary(const char*, st_colorful_message&);
bool set_colorful_message_in_this_binary(const char*, st_colorful_message&);

int main()
{
    auto input
        = char{};

    cout << theme << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << reset << endl;
    
    cout << endl;

    cout << theme << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << reset << endl;
    cout << theme << "]" << reset << " colorful message" << endl;
    cout << theme << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << reset << endl;

    cout << endl;

    cout << theme << "[" << reset << " s " << theme << "]" << reset << "tore;" << endl;
    cout << theme << "[" << reset << " d " << theme << "]" << reset << "isplay;" << endl;
    cout << theme << "[" << reset << " e " << theme << "]" << reset << "xit;" << endl;

    cout << endl;

    cout << theme << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << reset << endl;

    cout << endl;

    cout << theme << "]" << reset << " option" << theme << ":" << reset << " ";
    cin >> input;
    input
        = tolower(input);

    cout << endl;
    cout << theme << "-" << reset << endl;
    cout << endl;

    cin.get();

    switch (input)
    {
        case '1':
        case 's':
        {
            auto colorful_message
                = st_colorful_message{};
            
            cout << theme << "]" << reset << " message" << theme << ":" << reset << " ";
            cin
                .getline(colorful_message.message, 90);

            cout << theme << "]" << reset << " foreground color" << theme << ":" << reset << " ";
            cin >> colorful_message.foreground_color;

            cout << theme << "]" << reset << " background color" << theme << ":" << reset << " ";
            cin >> colorful_message.background_color;
            
            cout << endl;
            
            cout << theme << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << reset << endl;
            
            cout << endl;

            if (set_colorful_message_in_this_binary("colorful_messages.bin", colorful_message))
            {
                cout << theme << "[" << reset << " the colorful message has been stored." << endl;
            }
            else
            {
                cout << theme << "[" << reset << " erro. the colorful message could not be stored." << endl;
            }
            
            cout << endl;

            cout << theme << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << reset << endl;
        }
        break;
        case '2':
        case 'd':
        {
            auto colorful_message
                = st_colorful_message{};

            cout << theme << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << reset << endl;

            cout << endl;

            if (get_colorful_message_in_this_binary("colorful_messages.bin", colorful_message))
            {
                cout << theme << "[" << reset << " \'" << "\u001b[48;5;" << colorful_message.background_color << "m" << "\u001b[38;5;" << colorful_message.foreground_color << "m"<< colorful_message.message << reset << "\'" << endl;
            }
            else
            {
                cout << theme << "[" << reset << " erro. there is no message stored." << endl;
            }

            cout << endl;

            cout << theme << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << reset << endl;
        }
        break;
        case '3':
        case 'e':
        {
            cout << theme << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << reset << endl;
            
            cout << endl;
            
            cout << theme << "[" << reset << " bye!" << endl;

            cout << endl;

            cout << theme << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << reset << endl;
        }
        break;
        default:
        {
            cout << theme << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << reset << endl;
            
            cout << endl;
            
            cout << theme << "[" << reset << " erro. option unknown!" << endl;

            cout << endl;

            cout << theme << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << reset << endl;
        }
        break;
    }

    cout << endl;
    
    cout << theme << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << reset << endl;
    
    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}

bool get_colorful_message_in_this_binary(const char* file, st_colorful_message& colorful_message)
{
    ifstream fin{};

    fin
        .open(file, ios_base::in
                    |
                    ios_base::binary);

    if (fin.is_open())
    {
        fin
            .read((char*)&colorful_message, sizeof(st_colorful_message));

        fin
            .close();

        return true;
    }
    else
    {
        ofstream fout{};

        fout
            .open(file, ios_base::out
                        |
                        ios_base::binary);

        fout
            .close();

        return false;
    }
}

bool set_colorful_message_in_this_binary(const char* file, st_colorful_message& colorful_message)
{
    ofstream fout{};

    fout
        .open(file, ios_base::out
                    |
                    ios_base::binary);

    if (fout.is_open())
    {
        fout
            .write((char*)&colorful_message, sizeof(st_colorful_message));

        fout
            .close();

        return true;
    }
    else
    {
        return false;
    }
}