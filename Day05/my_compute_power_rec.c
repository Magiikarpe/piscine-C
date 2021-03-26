/*
** EPITECH PROJECT, 2019
** my_compute_power_rec
** File description:
** Returns the power of the first argument.
*/

int my_compute_power_rec(int nb, int p)
{
    if (p < 0)
        return (0);
    if (p == 0)
        return (1);
    if (p > 0)
    {
        nb *= my_compute_power_rec(nb, p - 1);
    }
    return (nb);
}
