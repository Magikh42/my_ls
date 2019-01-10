/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** str_append
*/

#include "my.h"
#include <stdlib.h>

void str_append(char **str, char *src)
{
    char *new = smalloc((my_strlen(*str) + my_strlen(src) + 1) * sizeof(char));
    int i = 0;

    if (*str) {
        for (i = 0; (*str)[i]; i++)
            new[i] = (*str)[i];
        free(*str);
    }
    for (int j = 0; src[j]; j++) {
        new[i] = src[j];
        i++;
    }
    new[i] = '\0';
    *str = new;
}
