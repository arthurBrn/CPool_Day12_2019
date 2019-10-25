/*
** EPITECH PROJECT, 2019
** my_show_word_array
** File description:
** Task 03
*/

int my_strlen(char const *src);
void my_putchar(char c);
int my_putstr(char const *src);

int my_show_word_array(char * const *tab)
{
    int i = 0;

    while (tab[i] != 0) {
        my_putstr(tab[i]);
        my_putchar('\n');
        i++;
    }
}
