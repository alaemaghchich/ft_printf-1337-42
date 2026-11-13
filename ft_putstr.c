/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghchi <amaghchi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 12:40:02 by amaghchi          #+#    #+#             */
/*   Updated: 2026/11/12 22:58:35 by amaghchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t ft_putstr(char *str)
{
    size_t count;
    size_t i;

    count = 0;
    i = 0;
    while (str[i])
        count += ft_putchar(str[i++]);
    return (count);
}
