/*
** EPITECH PROJECT, 2018
** my_ls
** File description:
** header for my_ls
*/

#ifndef __MY_LS__
#define __MY_LS__

#include <stdbool.h>

typedef struct options_s
{
    bool l;
    bool R;
    bool d;
    bool r;
    bool t;
} options_t;

options_t get_options(int ac, char **av);

#endif /*__MY_LS__*/