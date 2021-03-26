/*
** EPITECH PROJECT, 2019
** my_print_comb
** File description:
** Comb
*/

#include <unistd.h>

void write_nb(int nb1, int nb2, int nb3)
{
    my_putchar(nb1 + '0');
    my_putchar(nb2 + '0');
    my_putchar(nb3 + '0');
}

int while_nb3(int nb1, int nb2, int nb3)
{
    while (nb3 < 10) {
        write_nb(nb1, nb2, nb3);
        my_putchar(',');
        my_putchar(' ');
        nb3++;
    }
    return (nb3);
}

int my_print_comb(void)
{
    int nb1 = 0;
    int nb2 = 1;
    int nb3 = 2;

    while (nb1 < 7) {
        while (nb2 < 10) {
            nb3 = while_nb3(nb1, nb2, nb3);
            nb2++;
            nb3 = nb2 + 1;
	}
	nb1++;
	nb2 = nb1 + 1;
	nb3 = nb2 + 1;
	if (nb1 == 7) {
            write_nb(nb1, nb2, nb3);
	}
    }
    return (0);
}
