/*
** EPITECH PROJECT, 2019
** my_compute_power_it
** File description:
** Returns the power of the first argument.
*/

int my_compute_power_it(int nb, int p)
{
    int nbr = nb;

    p--;
    if (p < 0)
        return (0);
    if (p == 0)
        return (1);
    while (p != 0) {
        nb *= nbr;
        p--;
    }
    return (nb);
}
