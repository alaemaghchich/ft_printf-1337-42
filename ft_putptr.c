/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghchi <amaghchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 09:46:56 by amaghchi          #+#    #+#             */
/*   Updated: 2026/11/18 13:16:28 by amaghchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_ui	ft_putptr(void *ptr)
{
	unsigned long	address;
	t_ui			count;
	t_ui			i;
	char			buff[16];
	char			*hex;

	if (ptr == NULL)
		return (ft_putstr("(nil)"));
	address = (unsigned long)ptr;
	hex = "0123456789abcdef";
    i = 0;
	count = ft_putstr("0x");
	while (address)
	{
		buff[i++] = hex[address % 16];
		address /= 16;
	}
	while (i)
		count += ft_putchar(buff[--i]);
	return (count);
}
// int main  ()
// {
// 	float test = 1337.42;
//     ft_putptr(&test);
//     printf("\n%p", &test);
// }