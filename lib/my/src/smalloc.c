/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** smalloc
*/

#include <stdlib.h>
#include <stddef.h>

void *smalloc(size_t size)
{
    void *ret = malloc(size);

    if (!ret)
        exit(84);
    return (ret);
}
