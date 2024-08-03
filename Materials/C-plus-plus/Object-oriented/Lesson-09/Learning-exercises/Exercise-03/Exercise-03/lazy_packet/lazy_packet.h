#pragma once

#include <iostream>

using std::cout;
using std::endl;

union lazy_data
{
    struct
    {
        short x;
        short y;
        short z;
        short w;
    } part;

    long long all;
};

class lazy_packet
{
public:
    lazy_packet();

    void begin();
    void end();
    void send()
    const;
    void operator<<(short data_a);
    void operator>>(short& data_a);
    short& operator[](const int& index);

private:
    int index;
    lazy_data data;

};