#include <unistd.h>
#include <stdio.h>
#include <string.h>

void    my_putchar(char c)
{
	write(1, &c, 1);
}

void    my_print_array(int *array, int size)
{
    int i;
    
    i = 0;
    while (i < size)
    {
        my_putchar(array[i] + 48);
        ++i;
    }
}

int     *my_sort_int_array(int *array, int size)
{
    int i;
    int j;
    int tmp;
    
    i = 0;
    j = 0;
    tmp = 0;
    while (i < size - 1)
    {
        j = 0;
        while (j < size - i - 1)
        {
            if (array[j] > array[j+1]) 
            {
                tmp = array[j];
                array[j] = array[j+1];
                array[j+1] = tmp;
            }
            ++j;
        }
        ++i;
    }
    return array;
}

int     main()
{
    int list[] = {5, 4, 3, 2, 1, 0};
    my_sort_int_array(list, 6);
    my_print_array(list, 6);
    return 0;
}