/*
** EPITECH PROJECT, 2019
** my_put_nbr
** File description:
** Task 07
*/

void my_putchar(char c);

static void resexception(void)
{
    my_putchar('-');
    my_putchar(2 + '0');
    my_putchar(1 + '0');
    my_putchar(4 + '0');
    my_putchar(7 + '0');
    my_putchar(4 + '0');
    my_putchar(8 + '0');
    my_putchar(3 + '0');
    my_putchar(6 + '0');
    my_putchar(4 + '0');
    my_putchar(8 + '0');
}

int my_put_nbr(int nb)
{
    int reste = 0;

    if (nb == -2147483648) {
        resexception();
        return (0);
    }
    if (nb < 0 && nb != -2147483648) {
        nb = nb * (-1);
        my_putchar('-');
    }
    if (nb >= 10) {
        reste = nb % 10;
        nb = nb / 10;
        my_put_nbr(nb);
        my_putchar(reste + '0');
    } else {
        my_putchar(nb + '0');
    }
    return (0);
}
