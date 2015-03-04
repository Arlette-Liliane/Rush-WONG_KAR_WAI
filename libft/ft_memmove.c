/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbrathie <rbrathie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 21:24:26 by rbrathie          #+#    #+#             */
/*   Updated: 2013/11/22 21:24:28 by rbrathie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	unsigned char		*p1;
	unsigned const char	*p2;

	p1 = s1;
	p2 = s2;
	if (p1 < p2)
		ft_memcpy(s1, s2, n);
	else
	{
		while (n > 0)
		{
			p1[n - 1] = p2[n - 1];
			n--;
		}
	}
	return (s1);
}
