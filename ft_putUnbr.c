/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putUnbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghchi <amaghchi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 12:14:26 by amaghchi          #+#    #+#             */
/*   Updated: 2026/11/13 09:10:36 by amaghchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_put_u_nbr(ui n)
{
	size_t	count;
	ui rev;

	count = 0;
	rev = ft_rev_nbr(n);

	while (rev != 0)
	{
		count += ft_putchar((rev % 10) + 48);
		rev /= 10;
	}
	return (count);
}
