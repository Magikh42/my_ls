/*
** EPITECH PROJECT, 2018
** CPool_Day08
** File description:
** my_strdup
*/

#include <stdlib.h>
#include "my.h"

char *my_strndup(const char *src, int n)
{
    char *ret = malloc((my_strlen(src), n + 1) * sizeof(char));

    my_strncpy(ret, src, n);
    return (ret);
}
