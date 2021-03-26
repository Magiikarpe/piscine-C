/*
** EPITECH PROJECT, 2019
** my_strcapitalize
** File description:
** Capitalizes the first letter of each word.
*/

char *my_strlowcase_bis(char *str)
{
    int i = 0;

    while (str[i]) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        i++;
    }
    return (str);
}

int verif(int i, char *str)
{
    if (i != 0 && str[i - 1] > '0' && str[i - 1] < '9')
        return (0);
    else if (!((str[i - 1] >= 'a' && str[i - 1] <= 'z')
            || (str[i - 1] >= 'A' && str[i - 1] <= 'Z'))) {
        return (1);
    }
    return (0);
}

char *my_strcapitalize(char *str)
{
    my_strlowcase_bis(str);
    int i = 0;
    int n = 0;

    while (str[i]) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            n = verif(i, str);
            if (n == 1)
                str[i] -= 32;
        }
        i++;
    }
    return (str);
}
