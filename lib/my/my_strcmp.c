/*
** EPITECH PROJECT, 2019
** my_strcmp
** File description:
** Task 06
*/

#include <stdio.h>
int my_strlen(char const *str);

int my_strcmp(char const *s1, char const *s2)
{
    int value_string_one = 0;
    int value_string_two = 0;

    if (s2[0] == '\0')
        return (0);
    for (int i = 0; i < my_strlen(s1); i++) {
        value_string_one = value_string_one + s1[i];
    }
    for (int j = 0; j < my_strlen(s2); j++) {
        value_string_two = value_string_two + s2[j];
    }
    if (value_string_one > value_string_two)
        return (1);
    else if (value_string_one < value_string_two)
        return (-1);
    else
        return (0);
}
