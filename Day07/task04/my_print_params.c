/*
** EPITECH PROJECT, 2019
** my_print_params
** File description:
** A program that displays its arguments.
*/

#include <unistd.h>

void my_putchar_bis(char c)
{
    write(1, &c, 1);
}

int my_putstr_bis(char const *str)
{
    int i = 0;

    while (str[i]) {
        my_putchar_bis(str[i]);
        i++;
    }
    return (0);
}

int main(int argc, char **argv)
{
    int i = 1;
    int j = 0;

    if (argc <= 1)
        return (0);
    while (i < argc) {
        my_putstr_bis(argv[i]);
        my_putchar_bis('\n');
        i++;
    }
    return (0);
}
