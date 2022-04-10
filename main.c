#include <stdio.h>
#include "longest.h"
#define MAXLINE 500

int main() 
{
    int target_char;
    int max;
    char lines[MAXLINE];
    char mostTargetedChars[MAXLINE];
    
    max = 0;

    while ((target_char = punctCount(lines, MAXLINE)) > 0)
        if (target_char > max) 

        {
            max = target_char;
            copy(mostTargetedChars, lines);
        }

    if (max > 0)
    {
        printf("\nline: %s\n", mostTargetedChars);
    }

    return 0;

}
