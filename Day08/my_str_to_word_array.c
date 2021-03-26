/*
** EPITECH PROJECT, 2019
** my_str_to_word_array
** File description:
** Write a function that splits a string into words
*/

#include <stdlib.h>

int is_printable(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return (1);
        else if (c >= '0' && c <= '9')
            return (1);
        return (0);
}

int malloc_size_tab(char const *str)
{
    int i = 0;
    int c = 0;

    while (str[i]) {
        if (i == 0 && is_printable(str[i]) == 1)
            c++;
        else if (i != 0 && is_printable(str[i]) == 1
                && is_printable(str[i - 1]) == 0)
            c++;
        i++;
    }
    return (c);
}

int malloc_size_string(char const *str, char **dest, int c)
{
    int i = 0;
    int n = 0;
    int d = 0;

    while (n <= c) {
        while (is_printable(str[i]) == 1)
            i++;
        d = (i - d) + 1;
        dest[n] = malloc(d * sizeof(char));
        if (dest[n] == NULL)
            return (0);
        n++;
        while (is_printable(str[i]) == 0)
            i++;
    }
    return (1);
}

char **my_str_to_word_array(char const *str)
{
    char **dest = NULL;
    int i = 0;
    int n = 0;
    int j = 0;
    int c = malloc_size_tab(str);

    dest = malloc(c * sizeof(char *));
    if (dest == NULL)
        return (0);
    malloc_size_string(str, dest, c);
    while (str[i]) {
        while (is_printable(str[i]) == 1)
            dest[j][n++] = str[i++];
        j++;
        n = 0;
        i++;
    }
    return (dest);
}
