/*
    [ description of the fourth fixation exercise ] :
        - Build a template 'function get_largest_element_of_the_vector()'
        that receives a 5-element vector of type 'T' and returns the largest
        element of the vector. as the size of the vector is fixed, there is no
        need to take the size of the vector as a parameter. test the function with
        a program that creates a vector of 5 integers and another of 5 doubles.

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] get_largest_element_of_the_vector(i_elements.begin());
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            {
                    84,
                    28,
                    12,
                    48,
                    95,
            }

            - result: '95';

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] get_largest_element_of_the_vector(d_elements.begin());
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            {
                    14.2,
                    43.2,
                    23.4,
                    54.2,
                    43.2,
            }

            - result: '54.2';

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

template <typename T>
T get_largest_element_of_the_vector(const T*);

int main()
{
    auto i_elements
        =
        {
            (int)84,
            (int)28,
            (int)12,
            (int)48,
            (int)95,
        };

    auto d_elements
        =
        {
            (double)14.2,
            (double)43.2,
            (double)23.4,
            (double)54.2,
            (double)43.2,
        };

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] get_largest_element_of_the_vector(i_elements.begin());" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    cout << "{" << endl;
    for (auto& element : i_elements)
    {
        cout << "\t" << element << "," << endl;
    }
    cout << "}" << endl;

    cout << endl;

    cout << "- result: \'" << get_largest_element_of_the_vector(i_elements.begin()) << "\';" << endl;;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] get_largest_element_of_the_vector(d_elements.begin());" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;
    
    cout << "{" << endl;
    for (auto& element : d_elements)
    {
        cout << "\t" << element << "," << endl;
    }
    cout << "}" << endl;

    cout << endl;

    cout << "- result: \'" << get_largest_element_of_the_vector(d_elements.begin()) << "\';" << endl;;

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}

template<typename T>
T get_largest_element_of_the_vector(const T* r_vector)
{
    auto largest_element
        = T{};

    for (size_t i = 0; i < 5; i++)
    {
        largest_element
            = *(r_vector + i) > largest_element ? *(r_vector + i) : largest_element;
    }

    return largest_element;
}
