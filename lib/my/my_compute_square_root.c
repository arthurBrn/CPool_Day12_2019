/*
** EPITECH PROJECT, 2019
** my_compute_square_root
** File description:
** Task 05
*/

int my_putchar(char c);

int my_compute_square_root(int nb)
{
    int b = 0;

    for (int a = 0; a <= nb; a++) {
        if (b * b == nb)
            return b;
        else
            b++;
    }
    return (0);
}
