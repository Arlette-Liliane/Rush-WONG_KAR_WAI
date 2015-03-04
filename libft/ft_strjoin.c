/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbrathie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 15:56:00 by rbrathie          #+#    #+#             */
/*   Updated: 2013/11/26 15:56:03 by rbrathie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	s = (char *)malloc(sizeof(*s) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (s != NULL)
	{
		while (s1[i] != '\0')
		{
			s[i] = s1[i];
			i++;
		}
		while (s2[j] != '\0')
		{
			s[i] = s2[j];
			i++;
			j++;
		}
		s[i] = '\0';
		return (s);
	}
	return (NULL);
}
