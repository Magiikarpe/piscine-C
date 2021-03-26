/*
** EPITECH PROJECT, 2019
** my_is_prime
** File description:
**  function that return if the number is a prime or not.
*/

int my_is_prime(int nb)
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
