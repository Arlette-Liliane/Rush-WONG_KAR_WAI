/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbrathie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 19:35:01 by rbrathie          #+#    #+#             */
/*   Updated: 2013/11/25 19:35:09 by rbrathie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*s;

	s = (char *)malloc(sizeof(*s) * (size + 1));
	if (s != NULL)
	{
		while ((size + 1) > 0)
		{
			s[size] = '\0';
			size--;
		}
		return (s);
	}
	return (NULL);
}
