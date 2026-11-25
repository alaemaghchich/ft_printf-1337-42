/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putUnbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghchi <amaghchi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 12:14:26 by amaghchi          #+#    #+#             */
/*   Updated: 2026/11/25 10:51:45 by amaghchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_u_nbr(t_ui n)
{
	int		count;
	t_ui	len;
	char	*buf;

	if (n == 0)
		return (ft_putchar('0'));
	len = ft_nblen(n);
	buf = malloc((len + 1) * sizeof(char));
	if (buf == NULL)
		return (-1);
	buf[len] = '\0';
	while (n)
	{
		buf[--len] = (n % 10) + 48;
		n /= 10;
	}
	count = ft_putstr(buf);
	if (count == -1)
		return (-1);
	free(buf);
	return (count);
}
