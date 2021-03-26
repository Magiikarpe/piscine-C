/*
** EPITECH PROJECT, 2019
** my_compute_factorial_it
** File description:
** Returns the factorial of the number.
*/

int my_compute_factorial_it(int nb)
{
    int i;
    int number;

    i = 1;
    number = 1;
    if (nb == 0)
        return (1);
    if (nb < 0 || nb > 12)
        return (0);
    while (i <= nb) {
        number = number * i;
        i++;
    }
    return (number);
}
