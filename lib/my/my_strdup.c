/*
** EPITECH PROJECT, 2019
** my_strdup
** File description:
** Task 01
*/

#include <stdlib.h>
int my_strlen(char const *str);
char *my_strcpy(char *dest, char const *str);

char *my_strdup(char const *str)
{
    char *dest;

    dest = malloc(my_strlen(str) * sizeof(char));
    my_strcpy(dest, str);
}
