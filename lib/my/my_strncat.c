/*
** EPITECH PROJECT, 2019
** my_strncat
** File description:
** Task 03
*/

int my_strlen(char const *str);

char *my_strncat(char *dest, char const *src, int nb)
{
    int i = 0;
    int j = 0;

    if (my_strlen(src) == 0)
        return (dest);
    while (dest[i] != '\0') {
        i++;
    }
    while (nb > 0) {
        dest[i] = src[j];
        i++;
        j++;
        nb--;
    }
    return (dest);
}
