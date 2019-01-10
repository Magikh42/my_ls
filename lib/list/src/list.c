/*
** EPITECH PROJECT, 2018
** liblist
** File description:
** list
*/

#include <stdlib.h>
#include <stddef.h>
#include "list.h"

list_t *list_create(void)
{
    list_t *list = malloc(sizeof(list_t));

    list->tail = NULL;
    list->head = NULL;
    list->len = 0;
    return (list);
}

void list_free(list_t *list)
{
    list_item_t *current = list->tail;
    list_item_t *tmp = NULL;

    while (current) {
        tmp = current;
        current = current->next;
        free(tmp);
    }
    free(list);
}

int list_is_empty(list_t *list)
{
    return (list == NULL);
}

int list_len(list_t *list)
{
    return (list->len);
}
