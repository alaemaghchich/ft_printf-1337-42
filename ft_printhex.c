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

size_t ft_puthexa(unsigned int nbr, char format)
{
    char *hex;
    char buf[8];
    int i = 0;
    size_t count;

    if (nbr == 0)
        return(write(1, "0", 1));
    if (format == 'x')
        hex = "0123456789abcdef";
    else if(format == 'X')
    {
        hex = "0123456789ABCDEF";
    }
    while (nbr)
    {
        buf[i++] = hex[nbr % 16];
        nbr /= 16;
    }
    count = 0;
    while (i)
    {
        count += write(1, &buf[--i], 1);
    }
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
