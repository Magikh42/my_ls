/*
** EPITECH PROJECT, 2018
** my_ls
** File description:
** main
*/

#include "my.h"
#include "my_ls.h"
#include <stdlib.h>

static void free_all(char **paths, char *options)
{
    free(paths);
    free(options);
}

int main(int ac, char **av)
{
    char **paths = get_paths(ac, av);
    char *options = get_options(ac, av);
    int n_paths = count_paths(ac, av);

    if (paths == NULL)
        ls_dir("./", options, true);
    else {
        for (int i = 0; paths[i]; i++) {
            ls_dir(paths[i], options, n_paths <= 1);
        }
    }
    free_all(paths, options);
}
