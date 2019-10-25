/*
** EPITECH PROJECT, 2019
** my_cat
** File description:
** my_cat
*/

#include "my.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int my_cat(char *str)
{
    struct stat sb;
    char str2[10000];
    int fd = open(str, O_RDONLY);

    stat(str, &sb);
    if (fd == -1)
        return (84);
    read(fd, str2, sb.st_size);
    my_putstr(str2);
    close(fd);
    return (0);
}

int main(int ac, char **av)
{
    (void)ac;
    if (my_cat(av[1]) == 84)
        return (84);
    return (0);
}
