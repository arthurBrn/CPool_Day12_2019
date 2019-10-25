/*
** EPITECH PROJECT, 2019
** my_putstr
** File description:
** Task 02
*/

void my_putchar(char c);

int my_putstr(char const *str)
{
    int a = 0;

    while (str[a] != '\0') {
        my_putchar(str[a]);
        a++;
    }
    return (0);
}
