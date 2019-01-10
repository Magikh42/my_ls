/*
** EPITECH PROJECT, 2018
** my_ls
** File description:
** get_targets
*/

#include "my.h"

int count_targets(int ac, char **av)
{
    int count = 0;

    for (int i = 1; i < ac; i++) {
        if (!my_strcmp(av[i], "--"))
            return (count + (ac - i - 1));
        if (av[i][0] != '-')
            count++;
    }
    return (count);
}

char **get_targets(int ac, char **av)
{
    char **ret = smalloc(count_targets(ac, av));

    return (ret);
}