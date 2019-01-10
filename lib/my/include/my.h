/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** header for libmy
*/

#ifndef __MY_H__
#define __MY_H__

#include <stddef.h>

#define MAX(a, b) ((a) < (b) ? (b) : (a))
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define ABS(a) ((a) < 0 ? (-a) : (a))

#define IS_DIGIT(c) ((c) >= '0' && (c) <= '9')
#define IS_LOWER(c) ((c) >= 'a' && (c) <= 'z')
#define IS_UPPER(c) ((c) >= 'A' && (c) <= 'Z')
#define IS_ALPHA(c) (((c) >= 'a' && (c) <= 'z') || ((c) >= 'A' && (c) <= 'Z'))

void my_putchar(char c);
void my_putnbr(int nb);
void my_putstr(const char *str);
void my_puterr(const char *str);
int my_strlen(const char *str);
int my_getnbr(const char *str);
char *my_strcpy(char *dest, const char *src);
char *my_strncpy(char *dest , const char *src , int n);
char *my_strdup(const char *src);
char *my_strndup(const char *src, int n);
char *my_revstr(char *str);
char *my_strstr(char *str, const char *to_find);
int my_strcmp(const char *s1, const char *s2);
int my_strncmp(const char *s1, const char *s2, int n);
char *my_strcat(char *dest, const char *src);
char *my_strncat(char *dest, const char *src, int nb);

void *smalloc(size_t size);
void str_append(char **str, char *src);

#endif
