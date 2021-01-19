#include <stdio.h>
#include <string.h>

int     my_strlen(char const *str)
{
    int i;

    i = 0;
    while (str && str[i])
        i++;
    return i;
}

char     *my_evil_str(char *str)
{
    int i;
    int length;
    char tmp;

    i = 0;
    length = my_strlen(str) - 1;
    while (str && i < length / 2 + 1)
    {
        tmp = str[i];
        str[i] = str[length - i];
        str[length - i] = tmp;
        i++;
    }
    return str;
}

int     main()
{
    printf("%s\n", my_evil_str(strdup("")));
    printf("%s\n", my_evil_str(NULL));
    printf("%s\n", my_evil_str(strdup("t")));
    printf("%s\n", my_evil_str(strdup("te")));
    printf("%s\n", my_evil_str(strdup("test1")));

    return 0;
}