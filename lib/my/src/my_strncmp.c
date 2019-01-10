/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_strncmp
*/

#include "my.h"

int my_strncmp(const char *s1, const char *s2, int n)
{
    int i = 0;

    while (s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1) {
        i++;
    }
    if (s1[i] < s2[i])
        return (-1);
    if (s1[i] > s2[i])
        return (1);
    return (0);
}
