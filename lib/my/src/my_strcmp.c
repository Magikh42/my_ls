/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_strcmp
*/

#include "my.h"

int my_strcmp(const char *s1, const char *s2)
{
    for (int i = 0; s1[i] && s2[i]; i++) {
        if (s1[i] < s2[i])
            return (-1);
        else if (s1[i] > s2[i])
            return (1);
    }
    if (my_strlen(s1) < my_strlen(s2))
        return (-1);
    else if (my_strlen(s1) > my_strlen(s2))
        return (1);
    return (0);
}
