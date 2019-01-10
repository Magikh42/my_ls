/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_strcat
*/

#include "my.h"

char *my_strcat(char *dest, const char *src)
{
    int len = my_strlen(dest);
    int i = 0;

    for (i = 0; src[i]; i++) {
        dest[len + i] = src[i];
    }
    dest[len + i] = '\0';
    return (dest);
}
