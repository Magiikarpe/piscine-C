/*
** EPITECH PROJECT, 2019
** my_find_prime_sup
** File description:
** A function that return the next prime.
*/

int my_is_it_prime(int nb)
{
    int i = 3;

    if (nb < 0)
        return (0);
    if (nb % 2 == 0 && nb != 2)
        return (0);
    while (nb % i != 0 && i < nb) {
        i++;
        if (i != nb && nb % i == 0)
            return (0);
    }
    return (1);
}

int my_find_prime_sub(int nb)
{
    while (my_is_it_prime(nb) != 1)
        nb++;
    return (nb);
}
