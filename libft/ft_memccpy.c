/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbrathie <rbrathie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 20:20:48 by rbrathie          #+#    #+#             */
/*   Updated: 2015/01/22 14:13:42 by rbrathie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
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
		if (p1[i] == (unsigned char)c)
			return ((void *)(&p1[i + 1]));
		i++;
	}
	return (NULL);
}
