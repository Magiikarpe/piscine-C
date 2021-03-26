/*
** EPITECH PROJECT, 2019
** my_params_to_list
** File description:
** Write a function that creates a new list from the command line arguments.
*/

#include <stdlib.h>
#include <stddef.h>
#include "mylist.h"

linked_list_t *add(void *data, linked_list_t *list)
{
    linked_list_t *element;

    element = malloc(sizeof(*element));
    if (element == NULL)
        return (0);
    element->data = data;
    element->next = list;
    return (element);
}

linked_list_t *my_params_to_list(int ac, char *const *av)
{
    linked_list_t *list;

    list = NULL;

    for (int i = 0; i < ac; i++)
        list = add(av[i], list);
    return (list);
}
