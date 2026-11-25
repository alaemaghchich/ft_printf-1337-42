/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghchi <amaghchi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 09:18:30 by amaghchi          #+#    #+#             */
/*   Updated: 2026/11/25 12:24:29 by amaghchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	is_set(char format)
{
	return (format == 'c' || format == 's' || format == 'u' || format == 'd'
		|| format == 'i' || format == 'p' || format == 'x' || format == 'X'
		|| format == '%');
}

static int	do_it(char format, va_list arg)
{
	int	count;

	count = 0;
	if (format == 'c')
		count = ft_putchar(va_arg(arg, int));
	else if (format == 's')
		count = ft_putstr(va_arg(arg, char *));
	else if (format == 'u')
		count = ft_put_u_nbr(va_arg(arg, t_ui));
	else if (format == 'd' || format == 'i')
		count = ft_putnbr(va_arg(arg, int));
	else if (format == 'p')
		count = ft_putptr(va_arg(arg, void *), "0123456789abcdef");
	else if (format == 'x')
		count = ft_puthex('x', va_arg(arg, t_ui));
	else if (format == 'X')
		count = ft_puthex('X', va_arg(arg, t_ui));
	else if (format == '%')
		count = ft_putchar('%');
	if (count == -1)
		return (-1);
	return (count);
}

int	ft_printf(const char *c, ...)
{
	va_list	arg;
	int		i;
	int		count;
	int		written;

	if (!c)
		return (-1);
	(1) && (va_start(arg, c), i = 0, count = 0);
	while (c[i])
	{
		if (c[i] == '%' && !c[i + 1])
			written = -1;
		else if (c[i] == '%' && is_set(c[i + 1]))
			written = do_it(c[i++ + 1], arg);
		else
			written = ft_putchar(c[i]);
		if (written != -1)
			count += written;
		else
			return (va_end(arg), -1);
		i++;
	}
	va_end(arg);
	return (count);
}
