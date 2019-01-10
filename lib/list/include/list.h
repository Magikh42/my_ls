/*
** EPITECH PROJECT, 2018
** liblist
** File description:
** header for liblist
*/

#ifndef __LIST_H__
#define __LIST_H__

typedef struct list_s
{
    struct list_item_s *tail;
    struct list_item_s *head;
    int len;
} list_t;

typedef struct list_item_s
{
    void *data;
    struct list_item_s *prev;
    struct list_item_s *next;
} list_item_t;

list_t *list_create(void);
void list_free(list_t *list);
int list_is_empty(list_t *list);
int list_len(list_t *list);
void list_push_back(list_t *list, void *item);
void *list_look_back(list_t *list);
void *list_pop_back(list_t *list);
void list_push_front(list_t *list, void *item);
void *list_look_front(list_t *list);
void *list_pop_front(list_t *list);

#endif /*__LIST_H__*/
