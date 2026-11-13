/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghchi <amaghchi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 15:31:34 by amaghchi          #+#    #+#             */
/*   Updated: 2026/11/12 23:05:00 by amaghchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t ft_printhex(char format, ui n)
{
    size_t	count;
    char *hex;

    hex = NULL;
    if (format == 'x')
    {
        hex = "0123456789abcdef";
    }
    else if (format == 'X')
    {
        hex = "0123456789ABCDEF";
    }
	count = 0;
	if (n >= 16)
		count += ft_printhex(format, n / 16);
	count += ft_putchar(hex[n % 16]);
	return (count);   
}
// int main()
// {
//     ui test = ft_print_hex('X', 1355037);
//     printf("\n");
//     printf("%d", test);
//     printf("\n=================================\n");
//     size_t dd = printf("%X", 1355037);
//     printf("\n");
//     printf("%zu", dd);    
// }