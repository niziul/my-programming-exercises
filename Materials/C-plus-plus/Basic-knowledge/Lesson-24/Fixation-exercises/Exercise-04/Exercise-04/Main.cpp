/*
    [ description of the fourth fixation exercise ] :
        - in the previous exercise, if the user only types
        spaces for the message, the result is a colored strip
        with the background color. we can use this to create an
        image made up only of colored space characters.

        build a program that asks for the width and height of the
        image and reads a array of numbers from the user. each 3-digit
        number represents the color of a 'block' of the image. store the
        values for the height, width and each block of the image in a binary
        file. like the previous program, build a menu to control the image storage
        and display options.


    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] colorful image
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            [ s ]tore;
            [ d ]isplay;
            [ e ]xit;

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            ] option: s

            -

            ] width : 5
            ] height: 5

            ] define '5' colors in each line below

            ]#1: 220 220 220 220 220

            ]#2: 220 000 220 000 220

            ]#3: 220 220 220 220 220

            ]#4: 220 000 000 000 220

            ]#5: 220 220 220 220 220


            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            [ the colorful image has been stored.

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#include <iostream>
#include <fstream>
#include <array>

using std::cin;
using std::cout;
using std::endl;

using std::array;

using std::ios_base;

using std::ifstream;
using std::ofstream;

using std::streamsize;
using std::numeric_limits;

struct st_color
{
    char a;
    char b;
    char c;
};
struct st_colorful_image
{
    short width;
    short height;
    st_color* colors;
};

constexpr auto theme = "\u001b[38;5;209m";
constexpr auto reset = "\u001b[0m";

bool get_colorful_image_in_this_binary(const char*, st_colorful_image&);
bool set_colorful_image_in_this_binary(const char*, st_colorful_image&);

int main()
{
    auto input
        = char{};

    cout << theme << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << reset << endl;

    cout << endl;

    cout << theme << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << reset << endl;
    cout << theme << "]" << reset << " colorful image" << endl;
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
        auto colorful_image
            = st_colorful_image{};

        cout << theme << "]" << reset << " width" << theme << " :" << reset << " ";
        cin >> colorful_image.width;

        cout << theme << "]" << reset << " height" << theme << ":" << reset << " ";
        cin >> colorful_image.height;

        colorful_image
            .colors = new st_color[colorful_image.height
                                   *
                                   colorful_image.width];

        cout << endl;

        cout << theme << "]" << reset << " define \'" << colorful_image.width << "\' colors in each line below" << endl;
        
        cout << endl;

        for (auto i = 0; i < colorful_image.height; ++i)
        {
            cout << theme << "]#" << reset << i + 1 << ": ";

            for (auto j = 0; j < colorful_image.width; ++j)
            {
                cin >> (colorful_image.colors + (i * colorful_image.width + j))->a;
                cin >> (colorful_image.colors + (i * colorful_image.width + j))->b;
                cin >> (colorful_image.colors + (i * colorful_image.width + j))->c;
            }
            
            cout << endl;
        }

        cout << endl;

        cout << theme << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << reset << endl;

        cout << endl;

        if (set_colorful_image_in_this_binary("colorful_image.bin", colorful_image))
        {
            cout << theme << "[" << reset << " the colorful image has been stored." << endl;
        }
        else
        {
            cout << theme << "[" << reset << " erro. the colorful image could not be stored." << endl;
        }

        cout << endl;

        cout << theme << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << reset << endl;
    }
    break;
    case '2':
    case 'd':
    {
        auto colorful_image
            = st_colorful_image{};

        cout << theme << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << reset << endl;

        cout << endl;

        if (get_colorful_image_in_this_binary("colorful_image.bin", colorful_image))
        {
            char color[12]
                = "\033[48;5;xxxm";

            for (auto i = 0; i < colorful_image.height; ++i)
            {
                for (auto j = 0; j < colorful_image.width; ++j)
                {
                    auto index
                        = i * colorful_image.width + j;

                    color[7] = (colorful_image.colors + index)->a;
                    color[8] = (colorful_image.colors + index)->b;
                    color[9] = (colorful_image.colors + index)->c;
                    
                    cout << color << ' ';
                }

                cout << "\033[m" << endl;
            }

            cout << endl;
        }
        else
        {
            cout << theme << "[" << reset << " erro. there is no image stored." << endl;
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

bool get_colorful_image_in_this_binary(const char* file, st_colorful_image& colorful_image)
{
    ifstream fin{};

    fin
        .open(file, ios_base::in
                    |
                    ios_base::binary);

    if (fin.is_open())
    {
        fin
            .read((char*)&colorful_image.width, sizeof(short));
        fin
            .read((char*)&colorful_image.height, sizeof(short));

        colorful_image
            .colors = new st_color[colorful_image.height
                                   *
                                   colorful_image.width];

        fin
            .read((char*)colorful_image.colors, sizeof(st_color) * colorful_image.height * colorful_image.width);

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

bool set_colorful_image_in_this_binary(const char* file, st_colorful_image& colorful_image)
{
    ofstream fout{};

    fout
        .open(file, ios_base::out
                    |
                    ios_base::binary);

    if (fout.is_open())
    {
        fout
            .write((char*)&colorful_image.width, sizeof(short));
        fout
            .write((char*)&colorful_image.height, sizeof(short));
        fout
            .write((char*)colorful_image.colors, sizeof(st_color) * colorful_image.height * colorful_image.width);

        fout
            .close();
        
        delete[] colorful_image.colors;

        return true;
    }
    else
    {
        return false;
    }
}