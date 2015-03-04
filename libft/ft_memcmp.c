/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbrathie <rbrathie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 22:42:09 by rbrathie          #+#    #+#             */
/*   Updated: 2014/01/25 23:59:36 by rbrathie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	unsigned const char	*p1;
	unsigned const char	*p2;

	i = 0;
	p1 = s1;
	p2 = s2;
	if (n == 0)
		return (0);
	while (p1[i] == p2[i] && i < n)
		i++;
	if (i == n)
		return (0);
	else
		return (p1[i] - p2[i]);
}
