/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbrathie <rbrathie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 10:40:23 by rbrathie          #+#    #+#             */
/*   Updated: 2013/11/23 10:40:24 by rbrathie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		symbol;
	int		result;

	result = 0;
	symbol = 1;
	while (*str == '\t' || *str == '\n' || *str == ' ' || *str == '\v'
		|| *str == '\r' || *str == '\f')
		str++;
	if (*str == '-')
		symbol = -1;
	if (symbol == -1 || *str == '+')
		str++;
	else
		str += 0;
	while (ft_isdigit(*str))
	{
		result = result * 10;
		result = result + *str - '0';
		str++;
	}
	return (symbol * result);
}
