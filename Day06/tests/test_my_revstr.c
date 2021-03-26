/*
** EPITECH PROJECT, 2019
** test_my_revstr
** File description:
** test the function int my_revstr.c
*/

#include <criterion/criterion.h>

Test(my_revstr, copy_revstr_srting)
{
    char str[] = "Hello";

    my_revstr(str);
    cr_assert_str_eq(str, "olleH");
}
