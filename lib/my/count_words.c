/*
** EPITECH PROJECT, 2019
** count_words
** File description:
** Count words from a string
*/

int is_char(char one_char);
int my_strlen(char const *str);

int count__words(char const *str)
{
    int i = 0;
    int chars_in_string = 0;
    int word = 0;

    while (str[chars_in_string] != '\0')
    {
        while (is_char(str[i])) {
            i++;
        }
        if (i != my_strlen(str) && i != 0 && (!(is_char(str[i]))))
            word = word + 1;
            i++;
        chars_in_string++;
    }
    word = word + 1;
    return (word);
}
