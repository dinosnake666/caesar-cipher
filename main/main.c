#include "../headers/functions.h"

int main(int argc, char **argv)
{
    
    if (argc != 3)
    {
        printf("Error : this program takes 2 user arguments:\t./EXE_NAME KEY \"MESSAGE\"");
        return -1;
    }
    
    int key;
    key = atoi(argv[1]);
    printf("Original message : %s\tKey : %d\n", argv[2], key);
    printf("Encrypted message : %s\n", ft_cipher(argv[2], key));

    return 0;
}