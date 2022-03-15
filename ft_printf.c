/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaoud <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 15:22:25 by msaoud            #+#    #+#             */
/*   Updated: 2021/11/29 12:44:16 by msaoud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_check(va_list ap, const char *format, int *count, ...)
{
	if (*format == '%')
		ft_putchar('%', count);
	else if (*format == 'c')
		ft_putchar(va_arg(ap, int), count);
	else if (*format == 's')
		ft_putstr(va_arg(ap, char *), count);
	else if (*format == 'd' || *format == 'i')
		ft_putnbr(va_arg(ap, int), count);
	else if (*format == 'u')
		ft_putuns(va_arg(ap, unsigned int), count);
	else if (*format == 'x')
		ft_puthexa(va_arg(ap, unsigned int), count);
	else if (*format == 'X')
		ft_puthexx(va_arg(ap, unsigned int), count);
	else if (*format == 'p')
		ft_pointer(va_arg(ap, unsigned long long), count);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;
	int		i;

	i = -1;
	count = 0;
	va_start(ap, format);
	while (format[++i])
	{
		if (format[i] == '%')
		{
			i++;
			ft_check(ap, &format[i], &count);
		}
		else
			ft_putchar(format[i], &count);
	}
	va_end(ap);
	return (count);
}
