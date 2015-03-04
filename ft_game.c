/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_game.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbrathie <rbrathie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 12:21:50 by rbrathie          #+#    #+#             */
/*   Updated: 2015/03/01 07:32:49 by rbrathie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game_2048.h"

void	ft_init_game(t_game *g, int size)
{
	g->size = size;
	g->score = 0;
	g->max_val = WIN_VALUE;
	g->tab = NULL;
	g->tmp = NULL;
}

void	ft_game(t_game *g)
{
	ft_initialise_tab(g);
	ft_init_ncurses();
	if (ft_win(g))
	{
		endwin();
		ft_you_win();
		exit(0);
	}
	ft_print_tab_ncusrses(g);
	endwin();
	ft_free_tab(g);
}
