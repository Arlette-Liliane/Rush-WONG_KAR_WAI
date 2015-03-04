/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbrathie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 16:24:26 by rbrathie          #+#    #+#             */
/*   Updated: 2014/01/26 00:05:28 by rbrathie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char			*s1;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = ft_strlen(s) - 1;
	while (s[i] == ' ' || s[i] == ',' || s[i] == '\n' || s[i] == '\t')
		i++;
	if (!s[i])
		return (ft_strnew(1));
	while (s[j] == ' ' || s[j] == ',' || s[j] == '\n' || s[j] == '\t')
		j--;
	s1 = ft_strsub(s, i, (j - i + 1));
	if (s1 != NULL)
		return (s1);
	return (NULL);
}
