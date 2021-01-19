#include <stdio.h>

int     my_strlen(char const *str)
{
    int i;

    i = 0;
    while (str && str[i])
        i++;
    return i;
}

int     main()
{
    my_strlen("");
    my_strlen(NULL);
    my_strlen("ceci est un test !\n");
    my_strlen("ceci est un test !\n");

    return 0;
}