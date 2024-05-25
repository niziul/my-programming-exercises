/*
    [ description of the first learning exercise ] :
        - Define a class to represent a bank account. the data
        members of the class should include the customer's name
        (a string), the account number (and integer) and the balance
        (a floating point).

        the member functions must allow:

        a: create and initialize an object;
        b: display the account data;
        c: deposit money;
        d: withdraw money;

        you don't nedd to implement the class, just define
        its methods and attributes.

    [ output ] :
        ```

        ```
*/

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

class Bank
{
public:
    Bank(string, float_t);
    void display_data();
    void deposit(float_t);
    float_t withdraw();

private:
    string customer_name;
    int_fast16_t id;
    float_t balance;
};

int main()
{
    auto bank
        = Bank("goldlink", 2000);
}
