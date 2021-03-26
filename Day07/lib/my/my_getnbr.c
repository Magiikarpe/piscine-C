/*
** EPITECH PROJECT, 2019
** my_getnbr
** File description:
** atoi
*/

int my_getnbr(char const *src)
{
    int i = 0;
    int s = 1;
    long nb = 0;
    int c = 0;
    int compt = 0;

    if(src[i] == '+' || src[i] == '-') {
        while (src[i] == '+' || src[i] == '-') {
            if(src[i] == '-')
                s = -1 * s;
            i++;
        }
    }
    compt = i;
    while (src[i] >= '0' && src[i] <= '9') {
        i++;
        c++;
    }
    i = compt;
    if (c > 10)
        return (0);
    while (src[i] >= '0' && src[i] <= '9') {
        nb = (nb * 10) + src[i] - '0';
        i++;
    }
    if (nb * s >= -2147483648 && nb * s <= 2147483647) {
        return (nb * s);
    }
    return (0);
}
