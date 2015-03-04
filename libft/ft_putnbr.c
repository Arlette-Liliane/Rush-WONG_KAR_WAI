/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbrathie <rbrathie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 12:56:11 by rbrathie          #+#    #+#             */
/*   Updated: 2015/01/22 16:05:22 by rbrathie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_putmin(int n)
{
	if (n != -2147483648)
		return (0);
	write(1, "2147483648", 10);
	return (1);
}

void		ft_putnbr(int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		if (ft_putmin(n))
			return ;
		n = n * (-1);
	}
	if (n < 10)
		ft_putchar(n + '0');
	else
	{
		ft_putnbr(n / 10);
		ft_putchar(n % 10 + '0');
	}
}
