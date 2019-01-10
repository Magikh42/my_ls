/*
** EPITECH PROJECT, 2018
** my_ls
** File description:
** get_targets
*/

#include "my.h"
#include <stdlib.h>
#include <stddef.h>

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
    char **ret = smalloc((count_targets(ac, av) + 1) * sizeof(char *));
    int i = 1;
    int j = 0;

    while (i < ac) {
        if (!my_strcmp(av[i], "--")) {
            i++;
            break;
        }
        if (av[i][0] != '-') {
            ret[j++] = av[i];
        }
        i++;
    }
    while (i < ac) {
        ret[j++] = av[i];
        i++;
    }
    ret[j] = NULL;
    return (ret);
}