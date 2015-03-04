/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbrathie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 22:19:29 by rbrathie          #+#    #+#             */
/*   Updated: 2014/01/26 00:03:35 by rbrathie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*s1;

	i = 0;
	s1 = ft_strnew(ft_strlen(s));
	while (s[i] != '\0')
	{
		s1[i] = f(i, s[i]);
		i++;
	}
	return (s1);
}
