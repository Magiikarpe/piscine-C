/*
** EPITECH PROJECT, 2019
** no one
** File description:
** no one
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}
