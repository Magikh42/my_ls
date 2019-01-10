/*
** EPITECH PROJECT, 2018
** my_ls
** File description:
** main
*/

#include "my.h"
#include "my_ls.h"

int main(int ac, char **av)
{
    char *options = get_options(ac, av);

    my_putstr(options);
    my_putchar('\n');
}
