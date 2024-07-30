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
