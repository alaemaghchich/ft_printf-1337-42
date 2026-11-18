/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghchi <amaghchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 12:40:02 by amaghchi          #+#    #+#             */
/*   Updated: 2026/11/18 12:56:59 by amaghchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_ui	ft_putstr(char *str)
{
	t_ui	count;
	t_ui	i;

	count = 0;
	if (str == NULL)
		return (write(1, "(null)", 6));
	i = 0;
	while (str[i])
		count += ft_putchar(str[i++]);
	return (count);
}