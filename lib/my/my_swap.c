/*
** EPITECH PROJECT, 2019
** my_swap
** File description:
** Task 01
*/

void my_swap(int *a, int *b)
{
    int c = 0;

    c = *a;
    *a = *b;
    *b = c;
}
