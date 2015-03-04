/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_score_01.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbrathie <rbrathie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 22:43:53 by rbrathie          #+#    #+#             */
/*   Updated: 2015/02/28 22:53:34 by rbrathie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game_2048.h"

void	ft_score_down(t_game *g)
{
	int		i;

	i = 0;
	while (i < g->size)
	{
		ft_score_down_01(g, i);
		i++;
	}
}

void	ft_score_down_01(t_game *g, int col)
{
	int		i;

	i = g->size - 1;
	while (i > 0)
	{
		if ((g->tab[i][col] != 0) && (g->tab[i][col] == g->tab[i - 1][col]))
		{
			g->tab[i][col] *= 2;
			g->tab[i - 1][col] = 0;
			g->score += g->tab[i][col];
		}
		i--;
	}
}

void	ft_score_up(t_game *g)
{
	int		i;

	i = 0;
	while (i < g->size)
	{
		ft_score_up_01(g, i);
		i++;
	}
}

void	ft_score_up_01(t_game *g, int col)
{
	int		i;

	i = 0;
	while (i < (g->size - 1))
	{
		if ((g->tab[i][col] != 0) && (g->tab[i][col] == g->tab[i + 1][col]))
		{
			g->tab[i][col] *= 2;
			g->tab[i + 1][col] = 0;
			g->score += g->tab[i][col];
		}
		i++;
	}
}
