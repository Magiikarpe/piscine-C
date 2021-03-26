/*
** EPITECH PROJECT, 2019
** my_print_comb2
** File description:
** Combr2
*/

#include <unistd.h>

int if_neg(int c)
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

void my_put_nbr_comb(int c)
{
    c = if_neg(c);
    if (c >= 10) {
        my_put_nbr_comb(c/10);
        my_put_nbr_comb(c%10);
    } else
        my_putchar(c + '0');
}

void print_separate(int nb1, int nb2)
{
    if (nb2 <= 99 && nb1 != 98) {
        my_putchar(',');
        my_putchar(' ');
    }
}
int my_print_comb2(void)
{
    int nb1 = 0;
    int nb2 = 1;

    while (nb1 <= 98 && nb2 <= 99) {
        while (nb2 <= 99) {
            if (nb1 < 10)
                my_putchar('0');
            my_put_nbr_comb(nb1);
            my_putchar(' ');
            if (nb2 < 10)
                my_putchar('0');
            my_put_nbr_comb(nb2);
            print_separate(nb1, nb2);
            nb2++;
        }
        nb1++;
        nb2 = nb1 + 1;
    }
    return (0);
}
