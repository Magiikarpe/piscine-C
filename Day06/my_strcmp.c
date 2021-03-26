/*
** EPITECH PROJECT, 2019
** my_strcmp
** File description:
** strcmp function.
*/

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;
    int nb1 = 0;
    int nb2 = 0;
    int res = 0;

    while (s1[i]) {
        nb1 += s1[i];
        i++;
    }
    i = 0;
    while (s2[i]) {
        nb2 += s2[i];
        i++;
    }
    res = nb1 - nb2;
    return (res);
}
