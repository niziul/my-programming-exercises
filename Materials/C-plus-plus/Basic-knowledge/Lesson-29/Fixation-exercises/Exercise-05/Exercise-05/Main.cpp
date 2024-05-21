/*
    [ description of the fifth fixation exercise ] :
        - Build a template function 'get_largest_element_of_the_vector()'
        that receives a vector of elements of type 'T' and an integer representing
        the number of elements in the vector and returns the largest element in the
        vector. test the function in a program that creates a vector of 6 integers and
        another of 4 doubles.

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] get_largest_element_of_the_vector(i_elements.begin(), i_elements.size());
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            {
                    84,
                    28,
                    12,
                    48,
                    25,
                    62,
            }

            - result: '84';

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] get_largest_element_of_the_vector(d_elements.begin(), d_elements.size());
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            {
                    14.2,
                    43.2,
                    23.4,
                    43.2,
            }

            - result: '43.2';

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

template <typename T>
T get_largest_element_of_the_vector(const T*, const int);

int main()
{
    auto i_elements
        =
        {
            (int)84,
            (int)28,
            (int)12,
            (int)48,
            (int)25,
            (int)62,
        };

    auto d_elements
        =
        {
            (double)14.2,
            (double)43.2,
            (double)23.4,
            (double)43.2,
        };

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] get_largest_element_of_the_vector(i_elements.begin(), i_elements.size());" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    cout << "{" << endl;
    for (auto& element : i_elements)
    {
        cout << "\t" << element << "," << endl;
    }
    cout << "}" << endl;

    cout << endl;

    cout << "- result: \'" << get_largest_element_of_the_vector(i_elements
                                                                    .begin(),
                                                                i_elements
                                                                    .size()) << "\';" << endl;;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] get_largest_element_of_the_vector(d_elements.begin(), d_elements.size());" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    cout << "{" << endl;
    for (auto& element : d_elements)
    {
        cout << "\t" << element << "," << endl;
    }
    cout << "}" << endl;

    cout << endl;

    cout << "- result: \'" << get_largest_element_of_the_vector(d_elements
                                                                    .begin(),
                                                                d_elements
                                                                    .size()) << "\';" << endl;;

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}

template<typename T>
T get_largest_element_of_the_vector(const T* r_vector, const int size)
{
    auto largest_element
        = T{};

    for (size_t i = 0; i < size; i++)
    {
        largest_element
            = *(r_vector + i) > largest_element ? *(r_vector + i) : largest_element;
    }

    return largest_element;
}