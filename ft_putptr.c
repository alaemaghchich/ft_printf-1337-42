/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghchi <amaghchi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 09:46:56 by amaghchi          #+#    #+#             */
/*   Updated: 2026/11/14 06:17:17 by amaghchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_ui ft_putptr(void *ptr)
{
    unsigned long   address;
    t_ui             count;

    if (ptr == NULL)
        return (ft_putstr("(nil)"));
    address = (unsigned long)ptr;
    count = ft_putstr("0x");
    count += ft_puthex('x', address);
    return (count);
}
