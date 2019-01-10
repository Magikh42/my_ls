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
    options_t options = get_options(ac, av);

    if (options.l)
        my_putstr("l enabled\n");
    if (options.R)
        my_putstr("R enabled\n");
    if (options.d)
        my_putstr("d enabled\n");
    if (options.r)
        my_putstr("r enabled\n");
    if (options.t)
        my_putstr("t enabled\n");
}
