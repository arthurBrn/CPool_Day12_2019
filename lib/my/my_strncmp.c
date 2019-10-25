/*
** EPITECH PROJECT, 2019
** my_strncmp
** File description:
** Task 07
*/

int my_strlen(char const *str);

static int going_through_string(char const *sx, int n)
{
    int string_value = 0;

    for (int i = 0; i < n; i++) {
        string_value = string_value + sx[i];
    }
    return (string_value);
}

int my_strncmp(char const *s1, char const *s2, int n)
{
    if (s2[0] == '\n')
        return ('0');
    if (my_strlen(s1) == my_strlen(s2)) {
        if (going_through_string(s1, n) > going_through_string(s2, n))
            return (1);
        else if (going_through_string(s1, n) < going_through_string(s2, n))
            return (-1);
        else
            return (0);
    } else {
        if (going_through_string(s1, n) > going_through_string(s2, n))
            return (1);
        else if (going_through_string(s1, n) < going_through_string(s2, n))
            return (-1);
        else
            return (0);
    }
}
