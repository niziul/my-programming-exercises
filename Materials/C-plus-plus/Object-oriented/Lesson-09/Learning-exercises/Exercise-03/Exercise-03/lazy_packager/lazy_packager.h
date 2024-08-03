#pragma once

#include "../lazy_packet/lazy_packet.h"

class lazy_packager
{
public:
    lazy_packager(const size_t& size);
    ~lazy_packager();

    void send();
    short& operator[](const int& index);

private:
    short* values;
    size_t size;

};

