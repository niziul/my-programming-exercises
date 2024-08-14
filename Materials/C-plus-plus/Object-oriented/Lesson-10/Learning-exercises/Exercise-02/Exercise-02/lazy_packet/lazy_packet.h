#pragma once

#include <iostream>

using std::cout;
using std::endl;

using std::ostream;
using std::istream;

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

    friend ostream& operator<<(ostream& ostream_a, const lazy_packet& lazy_packet_a);
    friend istream& operator>>(istream& istream_a, lazy_packet& lazy_packet_a);

private:
    int index;
    lazy_data data;

};