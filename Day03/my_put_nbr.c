/*
** EPITECH PROJECT, 2019
** my_put_nbr
** File description:
** write numbers.
*/

#include <unistd.h>

int negative_change(int c)
{
    if (c == -2147483648) {
        my_putchar('-');
        my_putchar('2');
        c = 147483648;
    } else if (c < 0) {
        c *= -1;
        my_putchar('-');
    }
    return (c);
}

int my_put_nbr(int c)
{
    c = negative_change(c);
    if (c >= 10) {
        my_put_nbr(c / 10);
        my_put_nbr(c % 10);
    } else
        my_putchar(c + '0');
    return (0);
}
