#include <ctype.h>

int     ft_letter_count(char *message)
{
    int     i;
    int     letter_count;

    i = 0;
    letter_count = 0;
    while (message[i])
    {
        if (isalpha(message[i]))
            letter_count++;
        i++;
    }
    return letter_count;
}