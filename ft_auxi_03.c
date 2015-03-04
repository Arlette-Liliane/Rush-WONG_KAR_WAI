/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_auxi_03.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbrathie <rbrathie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 16:55:48 by rbrathie          #+#    #+#             */
/*   Updated: 2015/03/01 07:23:27 by rbrathie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game_2048.h"

void	ft_debug_start_end_value_line(t_game *g)
{
	int		i;

	i = 0;
	ft_putstr("-Debug start end line-");
	while (i < g->size)
	{
		ft_putstr("\nLine : ");
		ft_putnbr(i);
		ft_putstr("\n Pos Start :");
		ft_putnbr(ft_get_start_value_pos(g->tab[i], g->size));
		ft_putstr("\n Pos End ; ");
		ft_putnbr(ft_get_end_value_pos(g->tab[i], g->size));
		i++;
	}
	ft_putstr("\n - Fin Debug start end line -\n");
}

int		*ft_tab_cpy_col(int *dst, int **tab, int col, int size)
{
	int		i;

	i = 0;
	while (i < size)
	{
		dst[i] = tab[i][col];
		i++;
	}
	return (dst);
}

void	ft_debug_can_score(t_game *g)
{
	ft_putstr("-----Can score-----\n");
	ft_putstr("can score line : ");
	ft_putnbr(ft_can_score_line(g->tab, g->size, g->size));
	ft_putstr("\n can score col  : ");
	ft_putnbr(ft_can_score_col(g->tab, g->size, g->size));
	ft_putstr("\n___fin can score__\n");
}

int		ft_win(t_game *g)
{
	int		i;
	int		j;

	i = 0;
	while (i < g->size)
	{
		j = 0;
		while (j < g->size)
		{
			if (g->tab[i][j] >= (int)g->max_val)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
