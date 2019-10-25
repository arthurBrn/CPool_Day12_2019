/*
** EPITECH PROJECT, 2019
** my_strncpy
** File description:
** Task 02
*/

int my_strlen(char const *src);

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    while (i < n) {
        dest[i] = src[i];
        i++;
    }
    if (n > my_strlen(src))
        dest[i] = '\0';
    return (dest);
}
