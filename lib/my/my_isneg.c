/*
** EPITECH PROJECT, 2019
** my_isneg
** File description:
** Task 04
*/

void my_putchar(char c);

int my_isneg(int n)
{
    if (n > -1)
        my_putchar('P');
    else
        my_putchar('N');
    return (0);
}
