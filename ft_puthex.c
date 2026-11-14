/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghchi <amaghchi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 15:31:34 by amaghchi          #+#    #+#             */
/*   Updated: 2026/11/14 05:55:27 by amaghchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_printhex(char format, ui n)
{
	char	buf[8];
	char	*hex;
	ui	i;
	size_t count;
	
	if (n == 0)
		return (ft_putchar('0'));
	if (format == 'x')
		hex = "0123456789abcdef";
	else if (format == 'X')
	{
		hex = "0123456789ABCDEF";
	}
	i = 0;
	while (n)
	{
		buf[i++] = hex[n % 16];
		n /= 16;
	}
	count = 0;
	while (i)
		count += ft_putchar(buf[--i]);
	return (count);
}

