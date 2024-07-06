#include "athlete.h"

void athlete::accumulate(const athlete& athlete)
{
    matches
        += athlete.matches;
    attempts
        += athlete.attempts;

    calculate();
}

const bool athlete::compare(const athlete& athlete_a)
const
{
    return this->percentage < athlete_a.percentage ? true : false;
}
