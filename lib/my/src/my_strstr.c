/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_strstr
*/

#include <stddef.h>
#include "my.h"

char *my_strstr(char *str, const char *to_find)
{
    int len = my_strlen(to_find);

    for (int i = 0; str[i]; i++) {
        if (my_strncmp(str + i, to_find, len) == 0)
            return (str + i);
    }
    return (NULL);
}
