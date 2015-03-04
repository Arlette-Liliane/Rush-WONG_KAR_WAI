/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbrathie <rbrathie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/12 14:38:30 by rbrathie          #+#    #+#             */
/*   Updated: 2014/02/12 15:09:48 by rbrathie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_swap(char *a, char *b)
{
	char	c;

	c = *a;
	*a = *b;
	*b = c;
}

char	*ft_strrev(char *str)
{
	int		i;
	int		j;

	i = 0;
	j = ft_strlen(str) - 1;
	while (i < ((int)ft_strlen(str) / 2))
	{
		ft_swap(&str[i], &str[j]);
		i++;
		j--;
	}
	return (str);
}
