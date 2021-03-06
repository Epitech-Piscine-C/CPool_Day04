#include <stdio.h>
#include <string.h>

int     my_getnbr(char const *str)
{
    int i;
    int neg;
    int nbr;

    i = 0;
    neg = 1;
    nbr = 0;
    while (str && str[i] && (str[i] < '0' || str[i] > '9'))
    {
        if (str[i] == '-')
            neg *= -1;
        ++i;
    }
    while (str && str[i] && str[i] >= '0' && str[i] <= '9')
    {
        nbr = nbr * 10 + (str[i] - '0');
        ++i;
    }
    return nbr * neg;
}

int     main()
{
    printf("%d\n", my_getnbr(""));
    printf("%d\n", my_getnbr(NULL));
    printf("%d\n", my_getnbr("ki-0"));
    printf("%d\n", my_getnbr("p--12"));
    printf("%d\n", my_getnbr("-12345"));
    printf("%d\n", my_getnbr("+−−−+−−++−−−+−−−+−−−+−42"));
    printf("%d\n", my_getnbr("42a43"));
    printf("%d\n", my_getnbr("11000000000000000000000042"));
    printf("%d\n", my_getnbr("-11000000000000000000000042"));

    return 0;
}