/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaoud <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 12:19:42 by msaoud            #+#    #+#             */
/*   Updated: 2021/11/29 12:20:18 by msaoud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *str, int *count)
{
	int	i;

	i = 0;
	if (!str)
		ft_putstr("(null)", count);
	else
	{
		while (str[i])
		{
			ft_putchar(str[i], count);
			i++;
		}
	}
}
