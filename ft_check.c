/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbrathie <rbrathie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 15:00:14 by rbrathie          #+#    #+#             */
/*   Updated: 2015/03/01 02:02:44 by rbrathie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game_2048.h"

int		ft_empty_case(t_game *g, int x, int y)
{
	if (g->tab[x][y] == 0)
		return (1);
	return (0);
}

int		ft_get_nbr_value(int *tab, int size)
{
	int		i;
	int		ct;

	i = 0;
	ct = 0;
	while (i < size)
	{
		if (tab[i] != 0)
			ct++;
		i++;
	}
	return (ct);
}

int		ft_full_tab(int **tab, int x, int y)
{
	int		i;
	int		j;

	i = 0;
	while (i < x)
	{
		j = 0;
		while (j < y)
		{
			if (tab[i][j] == 0)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		ft_can_score_line(int **tab, int x, int y)
{
	int		i;
	int		j;

	i = 0;
	while (i < x)
	{
		j = 0;
		while (j < (y - 1))
		{
			if ((tab[i][j] != 0) && tab[i][j] == tab[i][j + 1])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int		ft_can_score_col(int **tab, int x, int y)
{
	int		i;
	int		j;

	j = 0;
	while (j < y)
	{
		i = 0;
		while (i < (x - 1))
		{
			if ((tab[i][j] != 0) && tab[i][j] == tab[i + 1][j])
				return (1);
			i++;
		}
		j++;
	}
	return (0);
}
