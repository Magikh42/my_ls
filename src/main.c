/*
** EPITECH PROJECT, 2018
** my_ls
** File description:
** main
*/

#include "my.h"
#include "my_ls.h"

int count_targets(int ac, char **av);

int main(int ac, char **av)
{
    /*
    char **targets = get_targets(ac, av);

    for (int i = 0; targets[i]; i++) {
        my_putstr(targets[i]);
        my_putchar('\n');
    }
    */

    int count = count_targets(ac, av);

    my_putnbr(count);
    my_putchar('\n');
}
