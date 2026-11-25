/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nblen.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghchi <amaghchi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 10:51:52 by amaghchi          #+#    #+#             */
/*   Updated: 2026/11/23 10:08:46 by amaghchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_ui	ft_nblen(long nb)
{
	t_ui	count;

	if (nb > 0)
		count = 0;
	else
		count = 1;
	while (nb)
	{
		count++;
		nb /= 10;
	}
	return (count);
}
