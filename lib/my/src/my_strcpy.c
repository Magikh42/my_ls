/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_strcpy
*/

#include "my.h"

char *my_strcpy(char *dest, const char *src)
{
    int i;

    for (i = 0; src[i]; i++) {
        dest[i] = src[i];
    }
    dest[i] = '\0';
    return (dest);
}
