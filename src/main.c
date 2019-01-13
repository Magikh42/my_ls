/*
** EPITECH PROJECT, 2018
** my_ls
** File description:
** main
*/

#include "my.h"
#include "my_ls.h"
#include <stdlib.h>

int main(int ac, char **av)
{
    char **paths = get_paths(ac, av);
    char *options = get_options(ac, av);
    DIR **dirs = open_dirs(paths);

    free(paths);
    free(options);
    free(dirs);
}
