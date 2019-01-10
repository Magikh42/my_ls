/*
** EPITECH PROJECT, 2018
** liblist
** File description:
** list_front
*/

#include <stddef.h>
#include <stdlib.h>
#include "list.h"

void list_push_front(list_t *list, void *data)
{
    list_item_t *new = malloc(sizeof(list_t));

    new->data = data;
    new->prev = list->head;
    new->next = NULL;
    if (list->head)
        list->head->next = new;
    list->head = new;
    if (list->tail == NULL)
        list->tail = new;
    list->len++;
}

void *list_look_front(list_t *list)
{
    return (list->head->data);
}

void *list_pop_front(list_t *list)
{
    void *ret;
    list_item_t *tmp;

    if (list->head) {
        tmp = list->head;
        ret = list->head->data;
    }
    else
        return (NULL);
    list->head = list->head->prev;
    list->head->next = NULL;
    free(tmp);
    list->len--;
    return (ret);
}