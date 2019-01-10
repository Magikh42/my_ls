/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_strlen
*/

#include "my.h"

int my_strlen(const char *str)
{
    int i;

    if (!str)
    	return (0);
    for (i = 0; str[i]; i++);
    return (i);
}
