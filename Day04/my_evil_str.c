/*
** EPITECH PROJECT, 2019
** my_evil_str
** File description:
** Swap each of the string's characters.
*/

void my_swap_bis(char *a ,char *b)
{
    char c;

    c = *a;
    *a = *b;
    *b = c;
}

char *my_evil_str(char *str)
{
    int i = 0;
    int n = 0;
    
    while (str[i])
        i++;
    i--;
    while (n < i) {
        my_swap_bis(&str[n], &str[i]);
        n++;
        i--;
    }
    return (str);
}
