/*
    [ description of the first fixation exercise ] :
        - Considering the time class developed in the previous
        exercise and which now contains friend functions for reading
        with cin and displaying with cout, use the read and display methods
        to read and write files.

        ]
            class time
            {
            private:
                int hours;
                int minutes;

            public:
                time(int h = 0, int m = 0);

                time operator+(const time& t) const;
                time operator+(int num) const;

                friend time operator+(const int& hours, const time& time_a);
                friend time operator-(const int& hours, const time& time_a);

                friend ostream& operator<<(ostream& ostream_a, const time& time_a);
                friend istream& operator>>(istream& istream_a, time& time_a);
            };
        ]

        test the class with the following program:

        ]
            #include <iostream>
            #include <fstream>

            using std::cin;
            using std::cout;
            using std::endl;
            using std::ifstream;
            using std::ofstream;

            int main()
            {
                
                ifstream fin { "travel.txt" };
                if (!fin.is_open())
                {
                    cout << "file travel.txt not found.\n";
                    return EXIT_FAILURE;
                }

                time outward_a, return_a;

                fin >> outward_a;
                fin >> return_a;
                fin.close();

                time total_a = 5 + outward_a + return_a;

                ofstream fout { travel.txt };

                fout << "outward:" << outward_a << endl;
                fout << "return:" << return_a << endl;
                fout << "total:" << total_a << endl;

                fout.close();

                return 0;

            }
        ]

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] fin >> outward_a;
            ] fin >> return_a;
            ] fin.close();
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            ...

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] total_a = 5 + outward_a + return_a;
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            ...

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] fout << "outward:" << outward_a << endl;
            ] fout << "return:" << return_a << endl;
            ] fout << "total:" << total_a << endl;
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            ...

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```

        ```trip.txt
            1 50
            1 20
        ```

        ```tour.txt
            outward: 1h:50m

            return: 1h:20m

            total: 8h:10m
        ```
*/

#include <iostream>
#include <fstream>

#include "lazy_time.h"

using std::cin;
using std::cout;
using std::endl;

using std::ifstream;
using std::ofstream;

using std::streamsize;
using std::numeric_limits;

int main()
{
    lazy_time outward_a,
              return_a,
              total_a; 

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] fin >> outward_a;" << endl;
    cout << "] fin >> return_a;" << endl;
    cout << "] fin.close();" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    auto fin
        = ifstream
        {
            "trip.txt"
        };
    
    if (fin.is_open())
    {
        fin >> outward_a;
        fin >> return_a;
        
        fin
            .close();

        cout << "..." << endl;
    }
    else
    {
        cout << "file trip.txt not found.\n";
    }

    cout << endl;
    

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] total_a = 5 + outward_a + return_a;" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    total_a
        = 5 + outward_a + return_a;

    cout << "..." << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] fout << \"outward:\" << outward_a << endl;" << endl;
    cout << "] fout << \"return:\" << return_a << endl;" << endl;
    cout << "] fout << \"total:\" << total_a << endl;" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    
    cout << endl;

    auto fout
        = ofstream
        {
            "tour.txt"
        };

    if (fout.is_open())
    {
        fout << "outward: " << outward_a << endl;
        fout << "return: " << return_a << endl;
        fout << "total: " << total_a << endl;

        fout
            .close();

        cout << "..." << endl;
    }
    else
    {
        cout << "file tour.txt not found.\n";
    }

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}
