/*
** EPITECH PROJECT, 2019
** my_strupcase
** File description:
** Task 08
*/

char *my_strupcase(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] > 140 && str[i] < 173)
            str[i] = str[i] - 32;
        i++;
    }
    return (str);
}
