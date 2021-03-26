/*
** EPITECH PROJECT, 2019
** my_strncat
** File description:
** a function that concatenates n characters of the src string.
*/

char *my_strncat(char *dest, char const *src, int nb)
{
    int i = 0;
    int n = 0;

    while (dest[i])
        i++;
    while (src[n] && n < nb) {
        dest[i] = src[n];
        i++;
        n++;
    }
    return (dest);
}
