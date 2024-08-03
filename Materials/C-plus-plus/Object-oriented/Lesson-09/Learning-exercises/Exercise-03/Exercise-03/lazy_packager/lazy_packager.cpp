#include "lazy_packager.h"

lazy_packager::lazy_packager(const size_t& size)
: size
{
    size
}
{
    this->values
        = new short[this->size];
}

lazy_packager::~lazy_packager()
{
    delete[] this->values;
}

void lazy_packager::send()
{
    auto static packet_a
        = lazy_packet{};

    auto static index_a
        = int{};

    packet_a.begin();

    for (size_t i = 0; i < 4; i++)
    {
        if (index_a >= size)
        {
            packet_a << 0;
            
            continue;
        }

        packet_a << *(values + index_a++);
    }

    packet_a.end();

    for (size_t i = 0; i < 4; i++)
    {
        cout << packet_a[i];
    }

    cout << endl;
}

short& lazy_packager::operator[](const int& index)
{
    if (index >= size)
    {
        auto static temp
            = short{};

        cout << "error: index out of scope; " << endl;

        return temp;
    }

    return *(values + index);
}
