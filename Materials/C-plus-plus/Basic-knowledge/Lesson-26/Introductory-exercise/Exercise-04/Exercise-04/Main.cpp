/*
    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            ] total of two days
            {
                    10 hours, 40 minutes;
            }

            ] total of three days
            {
                    15 hours, 12 minutes;
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

struct st_time
{
    int hours;
    int minutes;
};

auto const minutesPerHour
= 60;

void sumTime(const st_time*, const st_time*, st_time*);

void displayTime(const st_time*);

int main()
{
    auto day1
        = st_time
        {
            5,
            45,
        };

    auto day2
        = st_time
        {
            4,
            55,
        };

    auto day3
        = st_time
        {
            4,
            32,
        };

    auto journey1
        = st_time{};

    sumTime(&day1,
            &day2,
            &journey1);

    auto journey2
        = st_time{};

    sumTime(&journey1,
            &day3,
            &journey2);

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "] total of two days" << endl;

    displayTime(&journey1);

    cout << endl;

    cout << "] total of three days" << endl;

    displayTime(&journey2);

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}

void sumTime(const st_time* time1, const st_time* time2, st_time* total)
{
    total
        ->hours = time1->hours + time2->hours + (time1->minutes + time2->minutes) / minutesPerHour;

    total
        ->minutes = (time1->minutes + time2->minutes) % minutesPerHour;
}

void displayTime(const st_time* time)
{
    cout << "{" << endl;
    cout << "\t" << time->hours << " hours, " << time->minutes << " minutes;" << endl;
    cout << "}" << endl;
}
