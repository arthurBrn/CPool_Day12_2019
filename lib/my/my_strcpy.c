/*
** EPITECH PROJECT, 2019
** my_strcpy
** File description:
** Task 01
*/

void my_putchar(char c);
int my_strlen(char const *str);

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;

    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
