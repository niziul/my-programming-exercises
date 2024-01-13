/*
    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - error when trying to open the file: 'planets.dat';

            ] enter the information of a planet you want to save
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            ] name       : earth
            ] gravity    : 9.80665
            ] population : 8.11883

            -


            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            ] list of all planets found in the file
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            ; 'earth' - 9.80665 - 8.11883

            -


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

struct st_planet
{
    char name[32];
    double gravity;
    double population;
};

void get_planets_information_in_this(const char*);
void set_planets_information_in_this(const char*, st_planet&);

int main()
{
    st_planet planet;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;
    
    cout << endl;

    get_planets_information_in_this("planets.dat");

    cout << endl;
    
    cout << "] enter the information of a planet you want to save" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    cout << "] name       : ";
    cin >> planet.name;

    cout << "] gravity    : ";
    cin >> planet.gravity;

    cout << "] population : ";
    cin >> planet.population;

    set_planets_information_in_this("planets.dat", planet);
    
    cout << endl;
    cout << "-" << endl;
    cout << endl;

    cout << endl;
    
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    get_planets_information_in_this("planets.dat");

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}

void get_planets_information_in_this(const char* file)
{
    st_planet planet;

    auto fin
        = ifstream{};

    fin
        .open(file, ios_base::in
                    |
                    ios_base::binary);

    if (fin.is_open())
    {
        cout << "] list of all planets found in the file" << endl;
        cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

        cout << endl;

        while (fin.read((char*)&planet, sizeof(st_planet)))
        {
            cout << "; \'" << planet.name << "\' - " << planet.gravity << " - " << planet.population << endl;

            cout << endl;
            cout << "-" << endl;
            cout << endl;
        }

        cout << endl;

        cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

        fin
            .close();
    }
    else
    {
        cout << "- error when trying to open the file: \'planets.dat\';" << endl;
    }
}

void set_planets_information_in_this(const char* file, st_planet& planet)
{
    auto fout
        = ofstream{};

    fout
        .open(file, ios_base::out
                    |
                    ios_base::app
                    |
                    ios_base::binary);

    if (fout.is_open())
    {
        fout
            .write((char*)&planet, sizeof(st_planet));
        
        fout
            .close();
    }
    else
    {
        cout << "- error when trying to open the file: \'planets.dat\';" << endl;
    }
}
