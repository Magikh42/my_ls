/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_putnbr
*/

#include "my.h"

void putnbr_rec(int nb)
{
    if (nb >= 10)
        putnbr_rec(nb / 10);
    my_putchar('0' + nb % 10);
}

void my_putnbr(int nb)
{
    if (nb == -2147483648) {
        my_putchar('-');
        my_putchar('2');
        my_putnbr(147483648);
        return;
    }
    if (nb < 0)
        my_putchar('-');
    putnbr_rec(nb >= 0 ? nb : -nb);
}
