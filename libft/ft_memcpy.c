/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbrathie <rbrathie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 19:30:53 by rbrathie          #+#    #+#             */
/*   Updated: 2014/01/25 23:55:54 by rbrathie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	size_t				i;
	unsigned char		*p1;
	unsigned const char	*p2;

	i = 0;
	p1 = s1;
	p2 = s2;
	while (i < n)
	{
		p1[i] = p2[i];
		i++;
	}
	return (s1);
}
