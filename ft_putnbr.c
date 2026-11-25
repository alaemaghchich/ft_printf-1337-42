/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghchi <amaghchi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 21:12:13 by amaghchi          #+#    #+#             */
/*   Updated: 2026/11/25 10:55:43 by amaghchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	t_ui	len;
	int		count;
	char	*buf;
	long	nb;

	if (n == 0)
		return (ft_putchar('0'));
	(1) && (nb = n, len = ft_nblen(nb), buf = malloc((len + 1) * sizeof(char)));
	if (buf == NULL)
		return (-1);
	if (nb < 0)
	{
		nb *= -1;
		buf[0] = '-';
	}
	buf[len] = '\0';
	while (nb)
		(1) && (buf[--len] = (nb % 10) + 48, nb /= 10);
	count = ft_putstr(buf);
	if (count == -1)
		return (-1);
	free(buf);
	return (count);
}
