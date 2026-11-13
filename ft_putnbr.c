/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghchi <amaghchi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 21:12:13 by amaghchi          #+#    #+#             */
/*   Updated: 2026/11/13 09:23:47 by amaghchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t ft_putnumber(int n)
{
    long rev;
    long nb;
    size_t count;

    count = 0;
    nb = n;
    if (nb == 0)
        count += ft_putchar('0');
    if (nb < 0)
    {
        count += ft_putchar('-');
        nb *= -1;
    }
    rev = ft_rev_nbr(nb);
    while (rev != 0)
    {
        count += ft_putchar((rev % 10) + 48);
        rev /= 10;
    }
    return (count);
}
