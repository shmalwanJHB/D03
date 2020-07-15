#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>


void fct(int a)
{
    *a = 24;
}

int main(void)
{
    int a;

    a = *****42;
    fct(&a);
    ft_putnbr(a);
    ft_putchar('\n');
    return (0);
}
