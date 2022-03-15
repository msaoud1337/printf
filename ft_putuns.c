/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuns.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaoud <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 12:22:11 by msaoud            #+#    #+#             */
/*   Updated: 2021/11/29 12:23:08 by msaoud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putuns(unsigned int nb, int *count)
{
	if (nb < 10)
		ft_putchar(nb + '0', count);
	else
	{
		ft_putuns(nb / 10, count);
		ft_putuns(nb % 10, count);
	}
}
