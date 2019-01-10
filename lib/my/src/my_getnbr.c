/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_getnbr
*/

#include "my.h"

static int is_sign(char c)
{
    return (c == '-' || c == '+');
}

static int is_digit(char c)
{
    return (c >= '0' && c <= '9');
}

static int nofit(char const *str)
{
    int i = 0;

    while (is_sign(*str))
        str++;
    while (is_digit(*str)) {
        str++;
        i++;
    }
    return (i > 10);
}

static int correct_int(long n)
{
    if (n < -2147483648)
        return (0);
    if (n > 2147483647)
        return (0);
    return (n);
}

int my_getnbr(const char *str)
{
    long n = 0;
    int sign = 1;
    int k = 1;

    if (nofit(str))
        return (0);
    while (is_sign(*str)) {
        if (*str == '-')
            sign *= -1;
        str++;
    }
    while (is_digit(*str))
        str++;
    str--;
    while (is_digit(*str)) {
        n += (*str - '0') * k;
        str--;
        k *= 10;
    }
    return (correct_int(n) * sign);
}
