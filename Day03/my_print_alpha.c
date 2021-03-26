/*
** EPITECH PROJECT, 2019
** my_print_alpha
** File description:
** write alphabet ascending order
*/

#include <unistd.h>

int my_print_alpha(void)
{
    int n = 'a';
    
    while (n <= 'z') {
        my_putchar(n);
        n++;
    }
    return (0);
}
