/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghchi <amaghchi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 12:40:02 by amaghchi          #+#    #+#             */
/*   Updated: 2026/11/25 10:52:29 by amaghchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int		count;
	int		written;
	t_ui	i;

	count = 0;
	if (str == NULL)
		return (write(1, "(null)", 6));
	i = 0;
	while (str[i])
	{
		written = ft_putchar(str[i]);
		if (written == -1)
			return (-1);
		count += written;
		i++;
	}
	return (count);
}
