/*
** EPITECH PROJECT, 2019
** my_strncmp
** File description:
** strncmp function
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;
    int nb1 = 0;
    int nb2 = 0;
    int res = 0;

    while (s1[i] && i <= n) {
        nb1 += s1[i];
        i++;
    }
    i = 0;
    while (s2[i] && i <= n) {
        nb2 += s2[i];
        i++;
    }
    res = nb1 - nb2;
    return (res);
}
