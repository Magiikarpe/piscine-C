/*
** EPITECH PROJECT, 2019
** my_strdup
** File description:
** A function that allocates memory.
*/

#include <stddef.h>
#include <stdlib.h>

char *my_strcpy(char *dest, char const *src);

char *my_strdup(char const *src)
{
    int i = 0;
    char *dest = NULL;

    while (src[i])
        i++;
    dest = malloc(i * sizeof(char));
    if (dest == NULL)
        return (0);
    my_strcpy(dest, src);
    return (dest);
}
