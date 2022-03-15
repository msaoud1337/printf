/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaoud <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 14:26:48 by msaoud            #+#    #+#             */
/*   Updated: 2021/11/29 14:27:31 by msaoud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putp(unsigned long long nb, int *count)
{
	char	*s;

	s = "0123456789abcdef";
	if (nb < 16)
		ft_putchar(s[nb], count);
	else
	{
		ft_putp(nb / 16, count);
		ft_putp(nb % 16, count);
	}
}

void	ft_pointer(unsigned long long nb, int *count)
{
	ft_putstr("0x", count);
	ft_putp(nb, count);
}
