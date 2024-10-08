#include "lazy_packet.h"

lazy_packet::lazy_packet()
{
    this->index
        = 0;
    
    this->data
        =
        {
            0,
            0,
            0,
            0,
        };
}

void lazy_packet::begin()
{
    this->index
        = 0;
}

void lazy_packet::end()
{
    this->index
        = 0;
}

void lazy_packet::send()
const
{
    cout << this->data.all << endl;
}

void lazy_packet::operator<<(short data_a)
{
    switch (index++)
    {
    case 0:
    {
        this->data.part.x = data_a;
    }
    break;
    case 1:
    {
        this->data.part.y = data_a;
    }
    break;
    case 2:
    {
        this->data.part.z = data_a;
    }
    break;
    case 3:
    {
        this->data.part.w = data_a;
    }
    break;
    }
}

void lazy_packet::operator>>(short& data_a)
{
    switch (index++)
    {
    case 0:
    {
        data_a = this->data.part.x;
    }
    break;
    case 1:
    {
        data_a = this->data.part.y;
    }
    break;
    case 2:
    {
        data_a = this->data.part.z;
    }
    break;
    case 3:
    {
        data_a = this->data.part.w;
    }
    break;
    }
}

short& lazy_packet::operator[](const int& index)
{
    switch (index)
    {
    case 0:
    {
        return this->data.part.x;
    }
    break;
    case 1:
    {
        return this->data.part.y;
    }
    break;
    case 2:
    {
        return this->data.part.z;
    }
    break;
    case 3:
    default:
    {
        return this->data.part.w;
    }
    break;
    }
}

ostream& operator<<(ostream& ostream_a, const lazy_packet& lazy_packet_a)
{
    ostream_a << lazy_packet_a.data.part.x;
    ostream_a << " ";
    ostream_a << lazy_packet_a.data.part.y;
    ostream_a << " ";
    ostream_a << lazy_packet_a.data.part.z;
    ostream_a << " ";
    ostream_a << lazy_packet_a.data.part.w;

    return ostream_a;
}

istream& operator>>(istream& istream_a, lazy_packet& lazy_packet_a)
{
    istream_a >> lazy_packet_a.data.part.x;
    istream_a >> lazy_packet_a.data.part.y;
    istream_a >> lazy_packet_a.data.part.z;
    istream_a >> lazy_packet_a.data.part.w;

    return istream_a;
}
