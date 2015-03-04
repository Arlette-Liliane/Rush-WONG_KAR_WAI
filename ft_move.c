/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbrathie <rbrathie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 15:19:17 by rbrathie          #+#    #+#             */
/*   Updated: 2015/02/28 23:30:46 by rbrathie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game_2048.h"

void	ft_move_right(t_game *g)
{
	int		i;

	i = 0;
	while (i < g->size)
	{
		g->tmp = ft_tab_cpy_1d(g->tmp, g->tab[i], g->size);
		ft_move_right_01(g, i);
		i++;
	}
}

void	ft_move_right_01(t_game *g, int pos)
{
	int		i;
	int		l;
	int		y;

	l = g->size;
	i = 0;
	y = g->size - 1;
	while (i < ft_get_nbr_value(g->tmp, g->size))
	{
		while (y != ft_get_end_value_pos(g->tmp, y + 1))
			y--;
		g->tab[pos][l - 1] = g->tmp[y];
		l--;
		y--;
		i++;
	}
	l = g->size - ft_get_nbr_value(g->tmp, g->size);
	while (l > 0)
	{
		g->tab[pos][l - 1] = 0;
		l--;
	}
}

void	ft_move_left(t_game *g)
{
	int		i;

	i = 0;
	while (i < g->size)
	{
		g->tmp = ft_tab_cpy_1d(g->tmp, g->tab[i], g->size);
		ft_move_left_01(g, i);
		i++;
	}
}

void	ft_move_left_01(t_game *g, int pos)
{
	int		i;
	int		l;
	int		y;

	i = 0;
	y = g->size - 1;
	l = ft_get_nbr_value(g->tmp, g->size);
	while (i < ft_get_nbr_value(g->tmp, g->size))
	{
		while (y != ft_get_end_value_pos(g->tmp, y + 1))
			y--;
		g->tab[pos][l - 1] = g->tmp[y];
		l--;
		y--;
		i++;
	}
	l = ft_get_nbr_value(g->tmp, g->size);
	while (l < g->size)
	{
		g->tab[pos][l] = 0;
		l++;
	}
}
