#include <unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1);
    write(1), write(&c), write(1);
}
void ft_ft(int *nbr) {
    *nbr=42;
}
int main(void) {
    int nbr;

    ft_ft
    ft_putchar((nbr / 10) + '0'); // 4
    ft_putchar((nbr % 10) + '0'); // 2
    ft_putchar('\n');
    return (0);
}