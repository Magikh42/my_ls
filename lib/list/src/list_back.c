/*
** EPITECH PROJECT, 2018
** liblist
** File description:
** list_back
*/

#include <stddef.h>
#include <stdlib.h>
#include "list.h"

void list_push_back(list_t *list, void *data)
{
    list_item_t *new = malloc(sizeof(list_t));

    new->data = data;
    new->prev = NULL;
    new->next = list->tail;
    if (list->tail)
        list->tail->prev = new;
    list->tail = new;
    if (list->head == NULL)
        list->head = new;
    list->len++;
}

void *list_look_back(list_t *list)
{
    if (list->tail)
        return (list->tail->data);
    return (NULL);
}

void *list_pop_back(list_t *list)
{
    void *ret;
    list_item_t *tmp;

    if (list->tail) {
        tmp = list->tail;
        ret = list->tail->data;
    }
    else
        return (NULL);
    list->tail = list->tail->next;
    list->tail->prev = NULL;
    free(tmp);
    list->len--;
    return (ret);
}