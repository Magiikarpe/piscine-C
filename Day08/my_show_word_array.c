/*
** EPITECH PROJECT, 2019
** my_show_word_array
** File description:
** Write a function that displays the content of an array of words.
*/

void my_putchar(char c);

void my_putstr(char *str);

int my_show_word_array(char * const *tab)
{
    int i = 0;

    while (tab[i] != 0) {
        my_putstr(tab[i]);
        i++;
        my_putchar('\n');
    }
    return (0);
}
