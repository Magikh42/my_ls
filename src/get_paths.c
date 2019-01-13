/*
** EPITECH PROJECT, 2018
** my_ls
** File description:
** get_targets
*/

#include "my.h"
#include <stdlib.h>
#include <stddef.h>

int count_paths(int ac, char **av)
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

static char **get_paths_from_args(int ac, char **av, int n_paths)
{
    char **ret = smalloc((n_paths + 1) * sizeof(char *));
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

char **get_paths(int ac, char **av)
{
    char **ret;
    int n_paths = count_paths(ac, av);

    if (n_paths)
        ret = get_paths_from_args(ac, av, n_paths);
    else
        return (NULL);
    return (ret);
}