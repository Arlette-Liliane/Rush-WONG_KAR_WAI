/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbrathie <rbrathie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 12:19:28 by rbrathie          #+#    #+#             */
/*   Updated: 2015/03/01 02:00:15 by rbrathie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game_2048.h"

int		ft_error(t_game *g)
{
	if (g->size < 4 || g->size > 10)
		return (1);
	if (!ft_puissance(2, g->max_val) || g->max_val > 2048)
		return (1);
	return (0);
}
