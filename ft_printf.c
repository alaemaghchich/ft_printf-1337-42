/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghchi <amaghchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 09:18:30 by amaghchi          #+#    #+#             */
/*   Updated: 2026/11/17 12:53:43 by amaghchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	do_it(char format, int *i, va_list arg, int *ret)
{
	int	count;

	count = 0;
	if (format == 'c')
		count += ft_putchar(va_arg(arg, int));
	else if (format == 's')
		count += ft_putstr(va_arg(arg, char *));
	else if (format == 'u')
		count += ft_put_u_nbr(va_arg(arg, t_ui));
	else if (format == 'd' || format == 'i')
		count += ft_putnbr(va_arg(arg, int), i);
	else if (format == 'p')
		count += ft_putptr(va_arg(arg, void *));
	else if (format == 'x')
		count += ft_puthex('x', va_arg(arg, t_ui));
	else if (format == 'X')
		count += ft_puthex('X', va_arg(arg, t_ui));
	else if (format == '%')
		count += ft_putchar('%');
	else
		*ret = -1;
	return (count);
}
int	ft_printf(const char *c, ...)
{
	va_list	arg;
	int		i;
	int		count;
	int		ret;

	va_start(arg, c);
	i = 0;
	count = 0;
	while (c[i])
	{
		if (c[i] == '%')
		{
			count += do_it(c[++i], &i, arg, &ret);
			if (ret == -1)
				return (-1);
		}
		count += ft_putchar(c[i++]);
	}
	va_end(arg);
	return (count);
}
