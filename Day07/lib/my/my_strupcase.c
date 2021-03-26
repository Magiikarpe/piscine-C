/*
** EPITECH PROJECT, 2019
** my_strupcase
** File description:
** Puts every letter of every word in uppercase
*/

char *my_strupcase(char *str)
{
    int i = 0;

    while (str[i]) {
        if (str[i] >= 97 && str[i] <= 122)
            str[i] -= 32;
        i++;
    }
    return (str);
}
