/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghchi <amaghchi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 09:24:19 by amaghchi          #+#    #+#             */
/*   Updated: 2026/11/25 10:48:30 by amaghchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

typedef unsigned int	t_ui;
t_ui					ft_nblen(long nb);
int						ft_printf(const char *c, ...);
int						ft_putchar(int c);
int						ft_puthex(char format, t_ui n);
int						ft_putnbr(int n);
int						ft_putptr(void *ptr, char *hex);
int						ft_putstr(char *str);
int						ft_put_u_nbr(t_ui n);

#endif
