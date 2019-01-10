/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** smalloc
*/

#include "my.h"
#include <stdlib.h>
#include <stddef.h>

void *smalloc(size_t size)
{
    void *ret = malloc(size);

    if (!ret) {
        my_puterr("Allocation error\n");
        exit(84);
    }
    return (ret);
}
