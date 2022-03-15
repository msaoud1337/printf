/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaoud <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 12:23:20 by msaoud            #+#    #+#             */
/*   Updated: 2021/11/29 12:23:48 by msaoud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthexa(unsigned int nb, int *count)
{
	char	*s;

	s = "0123456789abcdef";
	if (nb < 16)
		ft_putchar(s[nb], count);
	else
	{
		ft_puthexa(nb / 16, count);
		ft_puthexa(nb % 16, count);
	}
}
