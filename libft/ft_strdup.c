/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbrathie <rbrathie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 16:30:43 by rbrathie          #+#    #+#             */
/*   Updated: 2014/04/19 16:13:26 by rbrathie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dest;

	dest = (char *)malloc(sizeof(*dest) * (ft_strlen(s1) + 1));
	if (dest != NULL)
	{
		ft_strcpy(dest, s1);
		return (dest);
	}
	else
		return (NULL);
}
