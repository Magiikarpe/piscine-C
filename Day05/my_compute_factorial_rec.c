/*
** EPITECH PROJECT, 2019
** my_compute_factorial_rec
** File description:
** Returns the factorial of the number.
*/

int my_compute_factorial_rec(int nb)
{
    if (nb < 0 || nb > 12)
        return (0);
    if (nb == 0)
        return (1);
    else if (nb >= 1)
        return (nb *= my_compute_factorial_rec(nb - 1));
    else
        return (0);
}
