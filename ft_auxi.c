/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_auxi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbrathie <rbrathie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 12:14:47 by rbrathie          #+#    #+#             */
/*   Updated: 2015/03/01 07:56:54 by rbrathie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game_2048.h"

void	ft_usage(int i)
{
	if (i == 1)
	{
		ft_putendl("Usage:  ./game_2048");
	}
	else
		ft_putendl("WIN_VALUE or GRILL_SIZE not good.");
}

void	ft_print(int **tab, int a, int b)
{
	int		i;
	int		j;

	i = 0;
	while (i < a)
	{
		j = 0;
		while (j < b)
		{
			ft_putnbr(tab[i][j]);
			if ((j + 1) < b)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	ft_initialise_tab(t_game *e)
{
	int		i;
	int		j;

	i = 0;
	if ((e->tab = (int **)malloc(sizeof(*e->tab) * e->size)))
	{
		while (i < e->size)
		{
			j = 0;
			if ((e->tab[i] = (int *)malloc(sizeof(**e->tab) * e->size)))
			{
				while (j < e->size)
				{
					e->tab[i][j] = 0;
					j++;
				}
			}
			i++;
		}
	}
	ft_add_random_value(e, 2);
	e->tmp = ft_cpy_tab_1d(e->tab[0], e->size);
}

int		ft_puissance(int expo, int nbr)
{
	int		tmp;

	tmp = expo;
	if (nbr < expo)
		return (0);
	while (tmp <= nbr)
	{
		if (tmp == nbr)
			return (1);
		tmp *= expo;
	}
	return (0);
}

void	ft_free_tab(t_game *g)
{
	int		i;

	i = 0;
	while (i < g->size)
	{
		free(g->tab[i]);
		g->tab[i] = NULL;
		i++;
	}
	free(g->tab);
	free(g->tmp);
	g->tmp = NULL;
}
