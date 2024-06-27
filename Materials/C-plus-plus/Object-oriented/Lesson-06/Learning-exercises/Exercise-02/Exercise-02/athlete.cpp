#include "athlete.h"

void athlete::accumulate(const athlete& athlete)
{
    matches
        += athlete.matches;
    attempts
        += athlete.attempts;

    calculate();
}