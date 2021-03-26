/*
** EPITECH PROJECT, 2019
** my_strncpy
** File description:
** Write a function that copiesncharacters from a string into another.
*/

#include <string.h>

char *my_strncpy(char *dest, char const *src, int n)
{
    n--;
    while (n >= 0) {
        dest[n] = src[n];
        n--;
    }
    return (dest);
}
