/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbrathie <rbrathie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 17:06:52 by rbrathie          #+#    #+#             */
/*   Updated: 2013/11/19 17:06:54 by rbrathie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	int	i;
	int	j;
	int	k;

	k = 0;
	i = ft_strlen(s1);
	j = ft_strlen(s2);
	while (s1[k] == s2[k] && s1[k] != '\0')
		k++;
	if (k == i && k == j)
		return (1);
	else
		return (0);
}
