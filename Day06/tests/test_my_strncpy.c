/*
** EPITECH PROJECT, 2019
** test_my_strncpy
** File description:
** test the function in my_strncpy.c
*/

#include <criterion/criterion.h>

Test(my_strncpy, copy_five_characters_in_empty_array)
{
    char dest[6] = {0};

    my_strncpy(dest, "Hello", 5);
    cr_assert_str_eq(dest, "Hello");
}
