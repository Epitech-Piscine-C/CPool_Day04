#include <unistd.h>

void    my_putchar(char c)
{
	write(1, &c, 1);
}

int     my_putstr(char const *str)
{
    int i;

    i = 0;
    while (str && str[i])
    {
        my_putchar(str[i]);
        i++;
    }
    return 0;
}

int     main()
{
    my_putstr("");
    my_putstr(NULL);
    my_putstr("ceci est un test !\n");

    return 0;
}