/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aemebiku <aemebiku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 02:24:47 by aemebiku          #+#    #+#             */
/*   Updated: 2015/03/01 07:52:35 by rbrathie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game_2048.h"

int		ft_draw_row(t_game *s, t_coord c, int row_i, int col_j)
{
	int	cpt;
	int	my_row;
	int	my_i;

	my_i = row_i + 1;
	my_row = (c.row - (s->size + 1)) / s->size;
	cpt = 0;
	while (cpt < my_row)
	{
		mvprintw(my_i, col_j, "|");
		my_i++;
		cpt++;
	}
	return (my_i);
}

int		ft_draw_col(t_game *s, t_coord c, int row_i)
{
	int		cpt;
	int		my_col;
	int		j;
	int		i;

	j = 2;
	my_col = (c.col - s->size) / s->size;
	cpt = 0;
	while (j <= c.col - 2)
	{
		mvprintw(row_i, j, "_");
		if (cpt == my_col)
		{
			mvprintw(row_i, j, "+");
			cpt = 0;
			i = ft_draw_row(s, c, row_i, j);
		}
		cpt++;
		j++;
	}
	return (i);
}

void	ft_draw_col_down(t_game *s, t_coord c, int row_i)
{
	int		cpt;
	int		my_col;
	int		j;

	mvprintw(row_i, 1, "+");
	j = 2;
	cpt = 0;
	my_col = (c.col - s->size) / s->size;
	while (j <= c.col - 2)
	{
		mvprintw(row_i, j, "_");
		if (cpt == my_col)
		{
			mvprintw(row_i, j, "+");
			cpt = 0;
		}
		cpt++;
		j++;
	}
}

void	ft_draw(t_game *s, t_coord c)
{
	int		i;
	int		sv;

	i = 0;
	attron(COLOR_PAIR(1));
	while (i < c.row - s->size)
	{
		mvprintw(i, 1, "+");
		sv = ft_draw_row(s, c, i, 1);
		sv = ft_draw_col(s, c, i);
		i = sv - 1;
		i++;
	}
	ft_draw_col_down(s, c, i);
	attroff(COLOR_PAIR(1));
	ft_print_draw(*s, c);
}

void	ft_print_draw(t_game g, t_coord c)
{
	int	i;
	int	j;
	int	r;
	int	co;

	i = 0;
	attron(COLOR_PAIR(2));
	while (i < g.size)
	{
		j = 0;
		while (j < g.size)
		{
			if (g.tab[i][j] > 0)
			{
				r = (c.row / g.size) * (i + 1) - (c.row / g.size) / 2;
				co = (c.col / g.size) * (j + 1) - (c.col / g.size) / 2;
				mvprintw(r, co, "%d", g.tab[i][j]);
			}
			j++;
		}
		i++;
	}
	attroff(COLOR_PAIR(2));
}
