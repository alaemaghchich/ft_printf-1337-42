/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghchi <amaghchi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 09:24:19 by amaghchi          #+#    #+#             */
/*   Updated: 2026/11/13 09:26:48 by amaghchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdint.h>
# include <stdio.h>

typedef unsigned int ui;

long ft_rev_nbr(long n);
size_t ft_put_u_nbr(ui n);
size_t ft_putstr(char *str);
size_t ft_putnumber(int n);
size_t ft_putchar(char c);
size_t ft_printhex(char format, ui n);

#endif