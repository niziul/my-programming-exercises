/*
    [ description of the fourth learning exercise ] :
        - Create  class to represent a list of items.

        a: the list holds zero or more items of any type;
        b: the list is created empty;
        c: you can add items to the list;
        d: you can check if the list is empty;
        e: you can check if the list is full;
        f: you can visit each item in the list and perform
        some action on it;

        provide a list.h file with the declaration of a
        list class and a list.cpp file with its implementation.
        also create a small program to test the class.

        the list data can be stored in a vector or, if you
        know the data type, in a liked list. but the public
        interface must not depend on your choice of storage
        format, i.e. the public interface must not depend on
        indexes or pointers.

        implement the visit using a method that takes a pointer
        to a function as a parameter:

        ]
            void list::visit(void (*fn)(item&));
        ]

        the 'fn' pointer points to a function outside the class
        (not a member function). it receives a reference to an item
        as an argument. item is the type of element stored in the list.
        the visit() method applies this function to each item in the list.

        the display(item& i) function below would be an example
        of a function that could be used with the visit method. create
        other external functions that could be useful and test their execution
        on the elements int the list.

        ]
            void display(item& i)
            {
                cout << "[" << i << "]";
            }
        ]

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] list_a.visit(display);
            ] list_b.visit(display);
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            {
            [23]
            [32]
            [54]
            }
            {
            [53.5]
            [83.2]
            [13.8]
            }

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] list_a.visit(display_the_value_add_up_by_itself);
            ] list_b.visit(display_the_value_add_up_by_itself);
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            {
            [46]
            [64]
            [108]
            }
            {
            [107]
            [166.4]
            [27.6]
            }

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] list_a.visit(display_the_value_multiply_by_itself);
            ] list_b.visit(display_the_value_multiply_by_itself);
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            {
            [529]
            [1024]
            [2916]
            }
            {
            [2862.25]
            [6922.24]
            [190.44]
            }

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#include <iostream>
#include <cassert>

#include "list.h"

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

template<typename T>
void display_the_value_add_up_by_itself(const T&);

template<typename T>
void display_the_value_multiply_by_itself(const T&);

template<typename T>
void display(const T&);

int main()
{
    auto list_a
        = list<int>{};

    list_a.add(23);
    list_a.add(32);
    list_a.add(54);

    auto list_b
        = list<float>{};
    
    list_b.add(53.5f);
    list_b.add(83.2f);
    list_b.add(13.8f);

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] list_a.visit(display);" << endl;
    cout << "] list_b.visit(display);" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    cout << "{" << endl;
    list_a.visit(display);
    cout << "}" << endl;

    cout << "{" << endl;
    list_b.visit(display);
    cout << "}" << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] list_a.visit(display_the_value_add_up_by_itself);" << endl;
    cout << "] list_b.visit(display_the_value_add_up_by_itself);" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;
    
    cout << "{" << endl;
    list_a.visit(display_the_value_add_up_by_itself);
    cout << "}" << endl;

    cout << "{" << endl;
    list_b.visit(display_the_value_add_up_by_itself);
    cout << "}" << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] list_a.visit(display_the_value_multiply_by_itself);" << endl;
    cout << "] list_b.visit(display_the_value_multiply_by_itself);" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;
    cout << "{" << endl;
    list_a.visit(display_the_value_multiply_by_itself);
    cout << "}" << endl;

    cout << "{" << endl;
    list_b.visit(display_the_value_multiply_by_itself);
    cout << "}" << endl;

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}

template<typename T>
void display_the_value_add_up_by_itself(const T& item)
{
    cout << "[" << item + item << "]" << endl;
}

template<typename T>
void display_the_value_multiply_by_itself(const T& item)
{
    cout << "[" << item * item << "]" << endl;
}

template<typename T>
void display(const T& item)
{
    cout << "[" << item << "]" << endl;
}
