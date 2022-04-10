#include <stdio.h>

/* this function returns what amount of punctuation chars are in input */
int punctCount(char chars_list[], int limit)
{
    int character, index, target_char;
    target_char = 0;
     
    for (index=0; index<limit-1 && (character=getchar()) !=EOF && c!='\n'; ++index)
    {
        if (character == ',' || character == '.')
        {
            ++target_char;
        }
        else
        {
            chars_list[index] = character;
        }
    }

    if (character == '\n')
    {
        chars_list[index] = character;
        ++index;
    }

    chars_list[index] = '\0';

    return target_char;
}
