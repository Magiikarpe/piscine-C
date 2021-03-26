/*
** EPITECH PROJECT, 2019
** my_rev_params
** File description:
** Displays all the arguments in reverse order.
*/

#include <unistd.h>

void my_putchar_bis2(char c)
{
    write(1, &c, 1);
}

int my_putstr_bis2(char const *str)
{
    int i = 0;

    while (str[i]) {
        my_putchar_bis2(str[i]);
        i++;
    }
    return (0);
}

int main(int argc, char **argv)
{
    int i = argc - 1;
    int j = 0;

    if (argc <= 1)
        return (0);
    while (i != 0) {
        my_putstr_bis2(argv[i]);
        my_putchar_bis2('\n');
        i--;
    }
    return (0);
}
