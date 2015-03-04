/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbrathie <rbrathie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 22:19:25 by rbrathie          #+#    #+#             */
/*   Updated: 2015/01/22 14:14:45 by rbrathie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned const char	*p;

	i = 0;
	p = s;
	while (i < n)
	{
		if (p[i] == (unsigned const char)c)
			return ((void *)(&p[i]));
		i++;
	}
	return (NULL);
}
