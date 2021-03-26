/*
** EPITECH PROJECT, 2019
** my_print_digits
** File description:
** Write all the digits
*/

#include <unistd.h>

int my_print_digits(void)
{
    int n = 0;

    while (n <= 9) {
        my_putchar(n + '0');
        n++;
    }
    return (0);
}
