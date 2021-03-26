/*
** EPITECH PROJECT, 2019
** my_sort_int_array
** File description:
** Sorts an integer.
*/

void my_sort_int_array(int *array, int size)
{
    int n = 0;
    int nb = 0;

    while (n < size - 1) {
        if (array[n] > array[n + 1]) {
            nb = array[n];
            array[n] = array[n + 1];
            array[n + 1] = nb;
            n = 0;
        }
        while (array[n] < array[n + 1])
            n++;
    }
}
