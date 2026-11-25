/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghchi <amaghchi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 09:46:56 by amaghchi          #+#    #+#             */
/*   Updated: 2026/11/25 11:19:19 by amaghchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *ptr, char *hex)
{
	unsigned long	address;
	int				count;
	t_ui			i;
	char			buff[16];
	int				written;

	if (ptr == NULL)
		return (ft_putstr("(nil)"));
	(1) && (address = (unsigned long)ptr, i = 0, count = ft_putstr("0x"));
	if (count == -1)
		return (-1);
	while (address)
	{
		buff[i++] = hex[address % 16];
		address /= 16;
	}
	while (i)
	{
		written = ft_putchar(buff[--i]);
		if (written == -1)
			return (-1);
		count += written;
	}
	return (count);
}
