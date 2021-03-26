/*
** EPITECH PROJECT, 2019
** my_revstr
** File description:
** Write a function that reverses a string.
*/

void my_swap(char *a ,char *b)
{
    char c;

    c = *a;
    *a = *b;
    *b = c;
}

char *my_revstr(char *str)
{
    int i = 0;
    int n = 0;

    while (str[i])
        i++;
    i--;
    while (n < i) {
        my_swap(&str[n], &str[i]);
        n++;
        i--;
    }
    return (str);
}
