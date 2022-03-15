/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putheX.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaoud <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 12:24:32 by msaoud            #+#    #+#             */
/*   Updated: 2021/11/29 12:28:44 by msaoud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthexx(unsigned int nb, int *count)
{
	char	*s;

	s = "0123456789ABCDEF";
	if (nb < 16)
		ft_putchar(s[nb], count);
	else
	{
		ft_puthexx((nb / 16), count);
		ft_puthexx((nb % 16), count);
	}
}
