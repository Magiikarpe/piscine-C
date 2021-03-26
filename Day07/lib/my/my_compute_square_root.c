/*
** EPITECH PROJECT, 2019
** my_compute_square_root
** File description:
** Function that returns the square root of a number.
*/

int my_compute_square_root(int nb)
{
    int i = 0;

    if (nb < 0)
        return (0);
    while (i * i < nb && i * i != nb) {
        i++;
        if (i * i == nb)
            return (i);
    }
    return (0);
}
