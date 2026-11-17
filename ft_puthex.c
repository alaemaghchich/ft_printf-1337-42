/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghchi <amaghchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 15:31:34 by amaghchi          #+#    #+#             */
/*   Updated: 2026/11/17 07:22:47 by amaghchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_ui	ft_puthex(char format, t_ui n)
{
	char	buf[8];
	char	*hex;
	t_ui	i;
	t_ui count;
	
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
