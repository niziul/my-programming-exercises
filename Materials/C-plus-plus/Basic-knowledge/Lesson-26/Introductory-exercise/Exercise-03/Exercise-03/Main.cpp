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

st_time sumTime(st_time, st_time);

void displayTime(st_time);

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
        = sumTime(day1,
                  day2);

    auto journey2
        = sumTime(journey1,
                  day3);

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "] total of two days" << endl;

    displayTime(journey1);

    cout << endl;

    cout << "] total of three days" << endl;

    displayTime(journey2);

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}

st_time sumTime(st_time c_time1, st_time c_time2)
{
    return st_time
    {
        c_time1.hours + c_time2.hours + (c_time1.minutes + c_time2.minutes) / minutesPerHour,
        (c_time1.minutes + c_time2.minutes) % minutesPerHour,
    };
}

void displayTime(st_time c_time)
{
    cout << "{" << endl;
    cout << "\t" << c_time.hours << " hours, " << c_time.minutes << " minutes;" << endl;
    cout << "}" << endl;
}
