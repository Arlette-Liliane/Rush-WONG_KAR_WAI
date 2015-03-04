/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbrathie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/28 21:46:42 by rbrathie          #+#    #+#             */
/*   Updated: 2014/04/21 16:39:30 by rbrathie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_itao_start(int tmp)
{
	int		i;
	long	n;

	i = 0;
	n = (long)tmp;
	if (n < 0)
	{
		i++;
		n = n * (-1);
	}
	if (n < 10)
		return (i + 1);
	while (n >= 10)
	{
		i++;
		n = n / 10;
	}
	return (i + 1);
}

char	*ft_itoa(int n)
{
	int		i;
	long	m;
	char	*s;

	m = (long)n;
	i = ft_itao_start(n);
	s = (char *)malloc(sizeof(*s) * (i + 1));
	if (s != NULL)
	{
		if (m == 0)
			s[0] = '0';
		if (m < 0)
		{
			s[0] = '-';
			m = m * (-1);
		}
		s[i] = '\0';
		while (m > 0)
		{
			s[i - 1] = (m % 10) + '0';
			m = m / 10;
			i--;
		}
	}
	return (s);
}
