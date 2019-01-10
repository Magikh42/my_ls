/*
** EPITECH PROJECT, 2018
** my_ls
** File description:
** get_options
*/

#include "my.h"
#include "my_ls.h"
#include <stdlib.h>

static options_t make_options(void)
{
    options_t ret;

    ret.l = 0;
    ret.R = 0;
    ret.d = 0;
    ret.r = 0;
    ret.t = 0;
    return (ret);
}

static void read_options(char *str, options_t *options)
{
    for (int i = 1; str[i]; i++) {
        switch (str[i]) {
        case 'l':
            options->l = true;
            break;
        case 'R':
            options->R = true;
            break;
        case 'd':
            options->d = true;
            break;
        case 'r':
            options->r = true;
            break;
        case 't':
            options->t = true;
            break;
        }
    }
}

options_t get_options(int ac, char **av)
{
    options_t ret = make_options();

    for (int i = 0; i < ac; i++) {
        if (!my_strcmp(av[i], "--"))
            return (ret);
        if (av[i][0] == '-')
            read_options(av[i], &ret);
    }
    return (ret);
}
