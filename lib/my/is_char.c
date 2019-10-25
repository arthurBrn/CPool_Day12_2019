/*
** EPITECH PROJECT, 2019
** is_char
** File description:
** Check if the args is a char
*/

int is_char(char one_char)
{
    if((one_char > 64 && one_char < 91) || (one_char > 96 && one_char < 123))
        return (1);
    else
        return (0);
}
