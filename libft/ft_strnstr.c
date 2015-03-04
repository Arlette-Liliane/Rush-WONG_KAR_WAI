/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbrathie <rbrathie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 21:09:29 by rbrathie          #+#    #+#             */
/*   Updated: 2015/01/22 15:19:46 by rbrathie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (ft_strlen(s2) == 0)
		return ((char *)s1);
	while (s1[i] && j < n)
	{
		if (s1[i] == *s2)
		{
			if ((i + ft_strlen(s2)) <= n
				&& !ft_strncmp(&s1[i], s2, ft_strlen(s2)))
				return ((char *)&s1[i]);
		}
		i++;
		j++;
	}
	return (NULL);
}
