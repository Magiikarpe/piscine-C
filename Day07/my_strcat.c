/*
** EPITECH PROJECT, 2019
** my_strcat
** File description:
** A function that concatenates two strings.
*/

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int n = 0;

    while (dest[i])
        i++;
    while (src[n]) {
        dest[i] = src[n];
        i++;
        n++;
    }
    dest[i] = '\0';
    return (dest);
}
