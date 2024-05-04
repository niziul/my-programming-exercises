/*
    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] display rick
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            - '000000272D98F598'
            {
                        hits      : '13';
                        attempts  : '14';
                        percentage: '92.8571';
            }

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] display time
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            - '000000272D98F628'
            {
                        hits      : '13';
                        attempts  : '14';
                        percentage: '92.8571';
            }

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] display john in the team
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            - '000000272D98F628'
            {
                        hits      : '23';
                        attempts  : '30';
                        percentage: '76.6667';
            }

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] display athletes
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            - '000000272D98F628'
            {
                        hits      : '32';
                        attempts  : '47';
                        percentage: '68.0851';
            }

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] display time
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            - '000000272D98F628'
            {
                        hits      : '32';
                        attempts  : '47';
                        percentage: '68.0851';
            }

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

struct st_athlete
{
    int   hits;
    int   attempts;
    float percentage;
};

void sum(st_athlete&);
void display(const st_athlete&);

st_athlete& accumulate(st_athlete&, const st_athlete&);

int main()
{
    auto rick
        = st_athlete
        {
            13,
            14,
        };

    auto john
        = st_athlete
        {
            10,
            16,
        };

    auto mark
        = st_athlete
        {
            9,
            17,
        };

    auto time
        = st_athlete{};

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] display rick" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;
    
    sum(rick);

    display(rick);

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] display time" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;
    
    accumulate(time, rick);

    display(time);

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] display john in the team" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    display(accumulate(time, john));

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] display athletes" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    auto& athletes
        = accumulate(time, mark);

    display(athletes);

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] display time" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    display(time);

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}

void sum(st_athlete& athlete)
{
    athlete.percentage
        = athlete.attempts != 0 ? 100.0f * (float)athlete.hits / (float)athlete.attempts : 0;
}

void display(const st_athlete& athlete)
{
    cout << "- \'" << &athlete << "\'" << endl;
    cout << "{" << endl;
    cout << "\t hits      : \'" << athlete.hits << "\';" << endl;
    cout << "\t attempts  : \'" << athlete.attempts << "\';" << endl;
    cout << "\t percentage: \'" << athlete.percentage << "\';" << endl;
    cout << "}" << endl;
}

st_athlete& accumulate(st_athlete& time, const st_athlete& athlete)
{
    time.attempts
        += athlete.attempts;

    time.hits
        += athlete.hits;

    sum(time);

    return time;
}
