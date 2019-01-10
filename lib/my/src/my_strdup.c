/*
** EPITECH PROJECT, 2018
** CPool_Day08
** File description:
** my_strdup
*/

#include <stdlib.h>
#include "my.h"

char *my_strdup(const char *src)
{
    char *ret = malloc(my_strlen(src) * sizeof(char));

    my_strcpy(ret, src);
    return (ret);
}
