/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbrathie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 14:52:28 by rbrathie          #+#    #+#             */
/*   Updated: 2014/02/18 20:58:32 by rbrathie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char		*s1;
	size_t		i;

	i = 0;
	s1 = (char *)malloc(sizeof(*s1) * (len + 1));
	if (s1 != NULL)
	{
		while (len > 0)
		{
			s1[i] = s[start];
			i++;
			start++;
			len--;
		}
		s1[i] = '\0';
		return (s1);
	}
	return (NULL);
}
