/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_score.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbrathie <rbrathie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 22:06:09 by rbrathie          #+#    #+#             */
/*   Updated: 2015/02/28 22:36:08 by rbrathie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game_2048.h"

void	ft_score_right(t_game *g)
{
	int		i;

	i = 0;
	while (i < g->size)
	{
		ft_score_right_01(g, i);
		i++;
	}
}

void	ft_score_right_01(t_game *g, int pos)
{
	int		i;

	i = g->size - 1;
	while (i > 0)
	{
		if ((g->tab[pos][i] != 0) && (g->tab[pos][i] == g->tab[pos][i - 1]))
		{
			g->tab[pos][i] *= 2;
			g->tab[pos][i - 1] = 0;
			g->score += g->tab[pos][i];
		}
		i--;
	}
}

void	ft_score_left(t_game *g)
{
	int		i;

	i = 0;
	while (i < g->size)
	{
		ft_score_left_01(g, i);
		i++;
	}
}

void	ft_score_left_01(t_game *g, int pos)
{
	int		i;

	i = 0;
	while (i < (g->size - 1))
	{
		if ((g->tab[pos][i] != 0) && (g->tab[pos][i] == g->tab[pos][i + 1]))
		{
			g->tab[pos][i] *= 2;
			g->tab[pos][i + 1] = 0;
			g->score += g->tab[pos][i];
		}
		i++;
	}
}
