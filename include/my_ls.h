/*
** EPITECH PROJECT, 2018
** my_ls
** File description:
** header for my_ls
*/

#ifndef __MY_LS__
#define __MY_LS__

#include <stdbool.h>
#include <dirent.h>

#define ALLOWED_OPTIONS ("lRdrt")

typedef struct stat stat_t;
typedef struct dirent dirent_t;

char *get_options(int ac, char **av);
bool char_in_str(char c, char *str);
int count_targets(int ac, char **av);
char **get_paths(int ac, char **av);
DIR **open_dirs(char **paths);

#endif /*__MY_LS__*/
