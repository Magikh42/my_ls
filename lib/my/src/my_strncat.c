/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_strncat
*/

#include "my.h"

char *my_strncat(char *dest, const char *src, int n)
{
    int len = my_strlen(dest);
    int i = 0;

    for (i = 0; src[i] && i < n; i++) {
        dest[len + i] = src[i];
    }
    dest[len + i] = '\0';
    return (dest);
}
