/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghchi <amaghchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 09:24:19 by amaghchi          #+#    #+#             */
/*   Updated: 2026/11/17 07:15:41 by amaghchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdint.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef unsigned int	t_ui;

int						ft_printf(const char *c, ...);
long					ft_rev_nbr(long n);
t_ui					ft_put_u_nbr(t_ui n);
t_ui					ft_putstr(char *str);
t_ui					ft_putnbr(int n, int *i);
t_ui					ft_putchar(int c);
t_ui					ft_puthex(char format, t_ui n);
t_ui					ft_putptr(void *ptr);

#endif
