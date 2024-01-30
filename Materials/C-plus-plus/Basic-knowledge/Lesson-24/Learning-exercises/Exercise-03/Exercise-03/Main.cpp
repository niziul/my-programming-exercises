/*
    [ description of the third learning exercise ] :
        - Create a union called 'password' with alphanumeric and
        numeric fields. in the main function, ask the user whether
        they want to display the stored password or write a new password
        to the file. if the file hasn't been created yet, the display option
        shouldn't do anything except warn the user that the file doesn't exist.

        use a binary file to store the password. when saving the
        password, first save a number to represent the password type.
        the simply numeric mod will correspond to the number '1', and the
        alphanumeric mode will correspond to the number '2'. when the when
        the user opens the program and selects the display option, the password
        type must be read to decide which union fields to display on the screen
        (numeric fields or alphanumeric field).

    [ output ] :
        ```out-01
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] password
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            [d]isplay the stored password;
            [w]rite a new password to the file;

            ] d

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            - erro. the file password.bin does not exist.

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```

        ```out-02
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] password
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            [d]isplay the stored password;
            [w]rite a new password to the file;

            ] w

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            - `1 - numeric` | `2 - alphanumeric`
            ] type : 1
            ] password: 2345

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```

        ```out-03
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] password
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            [d]isplay the stored password;
            [w]rite a new password to the file;

            ] d

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            type:
                            [ 'numeric';
            password:
                            [ '2345';

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```

        ```out-04
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] password
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            [d]isplay the stored password;
            [w]rite a new password to the file;

            ] w

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            - `1 - numeric` | `2 - alphanumeric`
            ] type : 2
            ] password: hy234jf

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```

        ```out-05
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] password
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            [d]isplay the stored password;
            [w]rite a new password to the file;

            ] d

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            type:
                            [ 'alphanumeric';
            password:
                            [ 'hy234jf';

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
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

struct st_password
{
    enum eType
    {
        numeric = 1,
        alphanumeric = 2,
    };
    union uPassword
    {
        short numeric;
        char alphanumeric[16];
    };

    eType type;
    uPassword password;
};

bool set_password_to_the_binary_file(const char*, st_password*);
bool get_password_to_the_binary_file(const char*, st_password*);

int main()
{
    auto input
        = char{};

    auto password
        = st_password{};

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] password" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    cout << "[d]isplay the stored password;" << endl;
    cout << "[w]rite a new password to the file;" << endl;

    cout << endl;

    cout << "] ";
    cin >> input;

    input
        = tolower(input);

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    switch (input)
    {
        case '1':
        case 'd':
        {
            if (!get_password_to_the_binary_file("password.bin", &password))
            {
                cout << "- erro. the file password.bin does not exist." << endl;
            }
            else
            {
                cout << "type:" << endl;

                if (password.type == password.numeric)
                {
                    cout << "\t\t[ \'numeric\';" << endl;
                }
                else
                {
                    cout << "\t\t[ \'alphanumeric\';" << endl;
                }

                cout << "password:" << endl;
                
                if (password.type == password.numeric)
                {
                    cout << "\t\t[ \'" << password.password.numeric << "\';" << endl;
                }
                else
                {
                    cout << "\t\t[ \'" << password.password.alphanumeric << "\';" << endl;
                }
            }
        }
        break;
        case '2':
        case 'w':
        {
            cout << "- `1 - numeric` | `2 - alphanumeric`" << endl;

            cout << "] type : ";
            cin >> input;

            password
                .type = (input == '1')
                        ?
                        password.numeric
                        :
                        password.alphanumeric;

            cout << "] password: ";

            if (password.type == password.numeric)
            {
                cin >> password.password.numeric;
            }
            else
            {
                cin >> password.password.alphanumeric;
            }

            set_password_to_the_binary_file("password.bin", &password);
        }
        break;
        default:
        {
            cout << "- erro. unknow option." << endl;
        }
        break;
    }

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}

bool set_password_to_the_binary_file(const char* file, st_password* password)
{
    auto fout
        = ofstream{};

    fout
        .open(file, ios_base::in
                    |
                    ios_base::trunc
                    |
                    ios_base::binary);

    if (fout.is_open())
    {
        fout
            .write((char*)password, sizeof(st_password));

        fout
            .close();

        return true;
    }

    return false;
}

bool get_password_to_the_binary_file(const char* file, st_password* password)
{
    auto fin
        = ifstream{};

    fin
        .open(file, ios_base::out
                    |
                    ios_base::binary);

    if (fin.is_open())
    {
        fin
            .read((char*)password, sizeof(st_password));

        fin
            .close();

        return true;
    }

    return false;
}