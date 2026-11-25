/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghchi <amaghchi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 15:31:34 by amaghchi          #+#    #+#             */
/*   Updated: 2026/11/25 10:58:59 by amaghchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(char format, t_ui n)
{
	char	buf[8];
	char	*hex;
	t_ui	i;
	int		count;
	int		written;

	if (n == 0)
		return (ft_putchar('0'));
	if (format == 'x')
		hex = "0123456789abcdef";
	else if (format == 'X')
		hex = "0123456789ABCDEF";
	i = 0;
	while (n)
		(1) && (buf[i++] = hex[n % 16], n /= 16);
	count = 0;
	while (i)
	{
		written = ft_putchar(buf[--i]);
		if (written == -1)
			return (-1);
		count += written;
	}
	return (count);
}
