#include "longest.h"


void copy(char to[], char from[])
{
    int index = 0;

    while ((to[index] = from[index]) != '\0')
        ++index;
}
