/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbrathie <rbrathie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 18:15:40 by rbrathie          #+#    #+#             */
/*   Updated: 2013/11/21 18:15:41 by rbrathie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t	i;

	i = 0;
	if (ft_strlen(s2) == 0)
		return ((char *)(s1));
	while (s1[i] != '\0')
	{
		if (s1[i] == s2[0])
		{
			if (!(ft_strncmp(&s1[i], s2, ft_strlen(s2))))
				return ((char *)(&s1[i]));
		}
		i++;
	}
	return (NULL);
}
