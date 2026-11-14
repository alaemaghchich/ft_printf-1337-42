/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putUnbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghchi <amaghchi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 12:14:26 by amaghchi          #+#    #+#             */
/*   Updated: 2026/11/14 06:17:53 by amaghchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_ui	ft_put_u_nbr(t_ui n)
{
	t_ui	count;
	t_ui rev;

	count = 0;
	rev = ft_rev_nbr(n);

	while (rev != 0)
	{
		count += ft_putchar((rev % 10) + 48);
		rev /= 10;
	}
	return (count);
}
