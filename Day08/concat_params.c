/*
** EPITECH PROJECT, 2019
** concat_params
** File description:
** Turns the command-line given arguments into a single string.
*/

#include <stdlib.h>
#include <stddef.h>

char *my_strcpy(char *dest, char const *src);

int my_putstr(char const *str);

int my_strlen(char const *str);

int compt_char(int argc, char **argv)
{
    int c = argc - 1;
    for (int i = 0; i  < argc; i++) {
        c += my_strlen(argv[i]);
    }
    return (c);
}

char *concat_params(int argc, char **argv)
{
    int n = 0;
    int c = 0;
    char *dest = NULL;

    c = compt_char(argc, argv);
    dest = malloc(c * sizeof(char));
    if (dest == NULL)
        return (0);
    for (int i = 0; i < argc; i++) {
        for (int j = 0; argv[i][j]; j++) {
            dest[n] = argv[i][j];
            n++;
        }
        if (i < (argc - 1))
            dest[n] = '\n';
        n++;
    }
    dest[n] = '\0';
    return (dest);
}
