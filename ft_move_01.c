/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_01.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbrathie <rbrathie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 20:03:29 by rbrathie          #+#    #+#             */
/*   Updated: 2015/02/28 23:08:58 by rbrathie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game_2048.h"

void	ft_move_up(t_game *g)
{
	int		i;

	i = 0;
	while (i < g->size)
	{
		g->tmp = ft_tab_cpy_col(g->tmp, g->tab, i, g->size);
		ft_move_up_01(g, i);
		i++;
	}
}

void	ft_move_up_01(t_game *g, int col)
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
		g->tab[l - 1][col] = g->tmp[y];
		l--;
		y--;
		i++;
	}
	l = ft_get_nbr_value(g->tmp, g->size);
	while (l < g->size)
	{
		g->tab[l][col] = 0;
		l++;
	}
}

void	ft_move_down(t_game *g)
{
	int		i;

	i = 0;
	while (i < g->size)
	{
		g->tmp = ft_tab_cpy_col(g->tmp, g->tab, i, g->size);
		ft_move_down_01(g, i);
		i++;
	}
}

void	ft_move_down_01(t_game *g, int col)
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
		g->tab[l - 1][col] = g->tmp[y];
		l--;
		y--;
		i++;
	}
	l = g->size - ft_get_nbr_value(g->tmp, g->size);
	while (l > 0)
	{
		g->tab[l - 1][col] = 0;
		l--;
	}
}
