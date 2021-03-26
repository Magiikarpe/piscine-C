/*
** EPITECH PROJECT, 2019
** my_put_nbr
** File description:
** write numbers.
*/

#include <unistd.h>
void my_putchar(char c);

int if_neg(int nb)
{
    if (nb == -2147483648) {
        my_putchar('-');
        my_putchar('2');
        nb = 147483648;
    }   
    else if (nb < 0) {
        nb *= -1;
        my_putchar('-');
    }
    return (nb);
}

int my_put_nbr(int nb)
{
    nb = if_neg(nb);
    if(nb >= 10) {
        my_put_nbr(nb/10);
        my_put_nbr(nb%10);
    }
    else
        my_putchar(nb + '0');
    return (0);
}
