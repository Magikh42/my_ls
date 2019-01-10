/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_strncpy
*/

#include "my.h"

char *my_strncpy(char *dest, const char *src, int n)
{
    int i = 0;

    for (i = 0; src[i] && i < n; i++) {
        dest[i] = src[i];
    }
    dest[MIN(i, n)] = '\0';
    return (dest);
}
