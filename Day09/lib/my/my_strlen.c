/*
** EPITECH PROJECT, 2019
** my_strlen
** File description:
** Counts the numbers of characters of a string.
*/

#include <stdio.h>

int my_strlen(char const *str)
{
    int c = 0;

    while (str[c]) {
        c++;
    }
    return (c);
}
