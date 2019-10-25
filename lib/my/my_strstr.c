/*
** EPITECH PROJECT, 2019
** my_strstr
** File description:
** Task 05
*/

#include <stdio.h>

int my_strlen(char const *str);
static char *search_first_letter(int index, char *str, char const *to_find);

static char *search_full_word(int index, char *str, char const *to_find)
{
    int original_index = index;
    int holder_index = 0;

    while (str[index] == to_find[holder_index] && str[index] != '\0') {
        index++;
        holder_index++;
    }

    if (holder_index == my_strlen(to_find))
        return (&str[original_index]);
    else
        return (search_first_letter(original_index + 1, str, to_find));
}

static char *search_first_letter(int index, char *str, char const *to_find)
{
    char *nullPointer = NULL;

    while (str[index] != to_find[0]) {
        if (index == my_strlen(str))
            return nullPointer;
        index++;
    }
    return (search_full_word(index, str, to_find));
}

char *my_strstr(char *str, char const *to_find)
{
    int index = 0;

    if (to_find[0] == '\0')
        return str;
    return (search_first_letter(index, str, to_find));
}
