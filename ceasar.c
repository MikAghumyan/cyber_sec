#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *ceasar(char *str, int shift)
{
    size_t len = strlen(str);
    for(size_t i = 0; i < len; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        str[i] = (str[i] - 'A' + shift) % 26 + 'A';
        else if(str[i] >= 'a' && str[i] <= 'z')
        str[i] = (str[i] - 'a' + shift) % 26 + 'a';
    }
    return str;
}

int main(int argc, char **argv)
{
    if(argc == 2)
    {
        char *str = argv[1];
        printf("Original: %s\n", str);
        printf("Encrypted: %s\n", ceasar(str, 3));
    }
}