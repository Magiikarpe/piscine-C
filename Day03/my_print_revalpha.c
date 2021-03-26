/*
** EPITECH PROJECT, 2019
** my_print_revalpha
** File description:
** write alphabet bt start at z.
*/

#include <unistd.h>

int my_print_revalpha(void)
{
    int n = 'z';

    while (n >= 'a') {
        my_putchar(n);
        n--;
    }
    return (0);
}
