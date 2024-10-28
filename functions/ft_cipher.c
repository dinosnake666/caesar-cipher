#include <stdio.h>
#include <ctype.h>

char     *ft_cipher(char *message, int key)
{
    int     i;
    int     value; //to go beyond ascii max value

    i = 0;
    key = key % 26;
    while (message[i])
    {
        if (isupper(message[i]))
        {
            value = message[i] + key;
            if  (value > 'Z')
                value -= 26; //goes back to upper bounds
            if  (value < 'A')
                value += 26;
            message[i] = value; //re-assign after correction
        }
        
        if (islower(message[i]))
        {
            value = message[i] + key;
            if  (value > 'z')
                value -= 26; //goes back to lower bounds
            if  (value < 'a')
                value += 26;
            message[i] = value; //re-assign after correction
        }
        i++;
    }
    return (message);    
}

/*int main()
{
    char buff2[] = "123tes_Wezt123";

    printf("ciphered buff2 : %s\n", ft_cipher(buff2, 20));

    return (0);
}*/