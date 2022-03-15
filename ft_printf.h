/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaoud <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 11:43:06 by msaoud            #+#    #+#             */
/*   Updated: 2021/11/29 14:26:50 by msaoud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

void	ft_putchar(char c, int *count);
void	ft_putstr(char *str, int *count);
void	ft_putnbr(int nb, int *count);
void	ft_putuns(unsigned int nb, int *count);
void	ft_puthexa(unsigned int nb, int *count);
void	ft_pointer(unsigned long long nb, int *count);
void	ft_puthexx(unsigned int nb, int *count);
int		ft_printf(const char *format, ...);
#endif
