/*
** EPITECH PROJECT, 2018
** my_ls
** File description:
** ls_dir
*/

#include "my_ls.h"
#include "my.h"
#include <sys/types.h>
#include <dirent.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>

static DIR *s_opendir(char *path)
{
    DIR *ret = opendir(path);

    if (!ret) {
        perror(PERROR_PREFIX);
        exit(84);
    }
    return (ret);
}

static dirent_t *s_readdir(DIR *dirp)
{
    dirent_t *ret = NULL;

    errno = 0;
    ret = readdir(dirp);
    if (ret == NULL && errno) {
        perror(PERROR_PREFIX);
        exit(84);
    }
    return (ret);
}

void ls_dir(char *path, char *options, bool is_single_dir)
{
    DIR *dirp = s_opendir(path);
    dirent_t *dirent;

    if (!is_single_dir) {
        my_putstr(path);
        my_putstr(":\n");
    }
    while ((dirent = s_readdir(dirp))) {
        my_putstr(dirent->d_name);
        my_putstr("\n");
    }
    if (!is_single_dir)
        my_putstr("\n");
}