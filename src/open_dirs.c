/*
** EPITECH PROJECT, 2018
** my_ls
** File description:
** open_dirs
*/

#include "my_ls.h"
#include "my.h"
#include <sys/stat.h>
#include <sys/types.h>
#include <dirent.h>
#include <stdlib.h>
#include <stddef.h>

static int count_dirs(char **paths)
{
    int ret = 0;
    stat_t file_stat;

    while (*paths) {
        stat(*paths, &file_stat);
        if ((file_stat.st_mode & S_IFMT) == S_IFDIR)
            ret++;
        paths++;
    }
    return (ret);
}

DIR **open_dirs(char **paths)
{
    DIR **ret = malloc((count_dirs(paths) + 1) * sizeof(DIR *));
    int i = 0;

    while (*paths) {
        ret[i] = opendir(*paths);
        if (!ret[i]) {
            my_puterr("Failed to open directory\n");
            exit(84);
        }
        i++;
        paths++;
    }
    ret[i] = NULL;
    return (ret);
}
