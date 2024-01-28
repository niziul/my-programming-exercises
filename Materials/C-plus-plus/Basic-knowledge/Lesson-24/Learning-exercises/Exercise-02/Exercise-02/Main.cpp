/*
    [ description of the second learning exercise ] :
        - Create a 'soldier' struct with the fields name, eliminations,
        deaths, elimination rate (eliminations/deaths) and number of matches
        played. in the main function, read a soldier from a binary file. if the
        file doesn't exist, you must direct the user to create a new soldier. when
        the 'soldier' is read (either form the file or from the keyboard), you must
        give the user the following options:

        ]
            [n]ew soldier (overwrites the previous one)
            [u]pdate soldier (with data form last match)
            [d]isplay soldier (current)
            [e]xit
        ]

        ] new
            : it must request information from a soldier, store it in memory
            while the program is running, and at the end of the program write
            it to a binary file.

        ] update
            : the user must enter the information relating to the last match
            of the game (number of eliminations and death), and the program must
            update the soldier's information by counting the information from that
            match.

        ] display
            : create a function that receives a soldier and displays his information
            on the screen. call the function passing the current soldier whenever this
            option is selected.

    [ output ] :
        ```out-01
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] soldier status
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            ] name         : master chief
            ] death        : 0
            ] matches      : 5
            ] eliminations : 20

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] what do you want to do with the above information?
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            [n]ew soldier (overwrites the previous one)
            [u]date soldier (with dta from last match)
            [d]isplay soldier (current)
            [e]xit

            ] option: d

            [ name              : master chief

            [ death             : 0

            [ matches           : 5

            [ eliminations      : 20

            [ eliminations rate : 0

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```

        ```out-02
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] soldier status
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            [ name              : master chief

            [ death             : 0

            [ matches           : 10

            [ eliminations      : 20

            [ eliminations rate : 0

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] what do you want to do with the above information?
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            [n]ew soldier (overwrites the previous one)
            [u]date soldier (with dta from last match)
            [d]isplay soldier (current)
            [e]xit

            ] option: u

            ] death        : 2
            ] eliminations : 5

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```

        ```out-03
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] soldier status
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            [ name              : master chief

            [ death             : 2

            [ matches           : 10

            [ eliminations      : 5

            [ eliminations rate : 0.4

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] what do you want to do with the above information?
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            [n]ew soldier (overwrites the previous one)
            [u]date soldier (with dta from last match)
            [d]isplay soldier (current)
            [e]xit

            ] option: n

            ] name         : master chief
            ] death        : 4
            ] matches      : 14
            ] eliminations : 20

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```

        ```out-04
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] soldier status
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            [ name              : master chief

            [ death             : 4

            [ matches           : 14

            [ eliminations      : 20

            [ eliminations rate : 0.2

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] what do you want to do with the above information?
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            [n]ew soldier (overwrites the previous one)
            [u]date soldier (with dta from last match)
            [d]isplay soldier (current)
            [e]xit

            ] option: e

            - bye.

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

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

struct st_soldier
{
    char name[32];
    short deaths;
    short matches;
    short eliminations;
    float elimination_rate;
};

void set_soldier(st_soldier*);
void upd_soldier(st_soldier*);
void get_soldier(st_soldier*);

bool set_soldier_to_the_binary_file(const char*, st_soldier*);
bool get_soldier_to_the_binary_file(const char*, st_soldier*);

int main()
{
    auto input
        = char{};

    auto soldier
        = st_soldier{};

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] soldier status" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    if (!get_soldier_to_the_binary_file("soldier.bin", &soldier))
    {
        set_soldier(&soldier);
    }
    else
    {
        get_soldier(&soldier);
    }

    cout << endl;
    
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << "] what do you want to do with the above information?" << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    
    cout << endl;
    
    cout << "[n]ew soldier (overwrites the previous one)" << endl;
    cout << "[u]date soldier (with dta from last match)" << endl;
    cout << "[d]isplay soldier (current)" << endl;
    cout << "[e]xit" << endl;

    cout << endl;

    cout << "] option: ";
    cin >> input;

    input
        = tolower(input);

    cout << endl;

    switch (input)
    {
        case '1':
        case 'n':
        {
            cin
                .get();

            set_soldier(&soldier);

            set_soldier_to_the_binary_file("soldier.bin", &soldier);
        }
        break;
        case '2':
        case 'u':
        {
            upd_soldier(&soldier);

            set_soldier_to_the_binary_file("soldier.bin", &soldier);
        }
        break;
        case '3':
        case 'd':
        {
            get_soldier(&soldier);

            set_soldier_to_the_binary_file("soldier.bin", &soldier);
        }
        break;
        case '4':
        case 'e':
        {
            cout << "- bye." << endl;
        }
        break;
        default:
        {
            cout << "- erro. unknow option." << endl;
        }
        break;
    }

    cout << endl;
    
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;
    
    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}

void set_soldier(st_soldier* soldier)
{
    cout << "] name         : ";
    cin
        .getline(soldier->name, 32);

    cout << "] death        : ";
    cin >> soldier->deaths;

    cout << "] matches      : ";
    cin >> soldier->matches;

    cout << "] eliminations : ";
    cin >> soldier->eliminations;

    soldier
        ->elimination_rate = (float)soldier->deaths
                             / 
                             (float)soldier->eliminations;
}

void upd_soldier(st_soldier* soldier)
{
    cout << "] death        : ";
    cin >> soldier->deaths;

    cout << "] eliminations : ";
    cin >> soldier->eliminations;

    soldier
        ->elimination_rate = (float)soldier->deaths
                             / 
                             (float)soldier->eliminations;
}

void get_soldier(st_soldier* soldier)
{
    cout << "[ name              : " << soldier->name << endl;

    cout << endl;

    cout << "[ death             : " << soldier->deaths << endl;

    cout << endl;

    cout << "[ matches           : " << soldier->matches << endl;

    cout << endl;

    cout << "[ eliminations      : " << soldier->eliminations << endl;

    cout << endl;

    soldier
        ->elimination_rate = (float)soldier->deaths
                             / 
                             (float)soldier->eliminations;

    cout << "[ eliminations rate : " << soldier->elimination_rate << endl;
}

bool set_soldier_to_the_binary_file(const char* file, st_soldier* soldier)
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
            .write((char*)soldier, sizeof(st_soldier));

        fout
            .close();

        return true;
    }

    return false;
}

bool get_soldier_to_the_binary_file(const char* file, st_soldier* soldier)
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
            .read((char*)soldier, sizeof(st_soldier));

        fin
            .close();

        return true;
    }

    return false;
}
