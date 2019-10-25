/*
** EPITECH PROJECT, 2019
** my_strcat
** File description:
** Task 02
*/

int my_strlen(char const *str);

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int j = 0;

    if (my_strlen(src) == 0)
        return (dest);
    while (dest[i] != '\0') {
        i++;
    }
    while (src[j] != '\0') {
        dest[i] = src[j];
        i++;
        j++;
    }
    return (dest);
}
