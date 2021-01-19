void     my_swap(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}

int     main()
{
    int a;
    int b;

    a = 0;
    b = 15;
    my_swap(&a, &b);
    
    return 0;
}