/*
** EPITECH PROJECT, 2019
** my_strstr
** File description:
** Reproduce strstr fonction.
*/

int verif(char *str, char const *to_find, int i, int j)
{
    int c = 0;

    while (to_find[c])
        c++;
    c--;
    while (str[i + j] == to_find[j] && j <= c)
        j++;
    if (j <= c)
        return (0);
    else
        return (1);
}

char *my_strstr(char *str, char const *to_find)
{
    int i = 0;
    int j = 0;
    int c = 0;
    int n = 0;

    while (str[i]) {
        if (str[i] == to_find[j])
            n = verif(str, to_find, i, j);
        if (n == 1)
            return (&str[i]);
        i++;
    }
    return ("null");
}
