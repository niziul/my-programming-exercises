#include <iostream>
using namespace std;

int main()
{
    int carrots;         // declares an integer variable
    int pineapples;
    int lostCarrots;

    carrots     = 25;    // assigns a value to a variable
    pineapples  = 10;
    lostCarrots = 1;

    cout << "I have "  << carrots <<  " corrots!" << endl;

    carrots = carrots - lostCarrots;     // decrements the variable

    cout << "I just lost " << lostCarrots << " corrots :(" << endl;

    cout << "However, I still have " << pineapples << " pineapples! and " << carrots << " corrots :)" << endl;

    return 0;
}
