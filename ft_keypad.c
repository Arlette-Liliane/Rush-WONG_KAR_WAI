/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_keypad.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbrathie <rbrathie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 03:24:38 by rbrathie          #+#    #+#             */
/*   Updated: 2015/03/01 07:49:25 by rbrathie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game_2048.h"

void	ft_up(t_game *g)
{
	ft_move_up(g);
	ft_score_up(g);
	ft_move_up(g);
	if (ft_win(g))
	{
		endwin();
		ft_you_win();
		exit(0);
	}
	if (ft_full_tab(g->tab, g->size, g->size) &&
			!ft_can_score_line(g->tab, g->size, g->size) &&
				!ft_can_score_line(g->tab, g->size, g->size))
	{
		endwin();
		if (ft_win(g))
			ft_you_win();
		else
			ft_you_lose(g);
		exit(0);
	}
	if (!ft_full_tab(g->tab, g->size, g->size))
		ft_add_random_value(g, 1);
}

void	ft_down(t_game *g)
{
	ft_move_down(g);
	ft_score_down(g);
	ft_move_down(g);
	if (ft_win(g))
	{
		endwin();
		ft_you_win();
		exit(0);
	}
	if (ft_full_tab(g->tab, g->size, g->size) &&
			!ft_can_score_line(g->tab, g->size, g->size) &&
				!ft_can_score_line(g->tab, g->size, g->size))
	{
		endwin();
		if (ft_win(g))
			ft_you_win();
		else
			ft_you_lose(g);
		exit(0);
	}
	if (!ft_full_tab(g->tab, g->size, g->size))
		ft_add_random_value(g, 1);
}

void	ft_right(t_game *g)
{
	ft_move_right(g);
	ft_score_right(g);
	ft_move_right(g);
	if (ft_win(g))
	{
		endwin();
		ft_you_win();
		exit(0);
	}
	if (ft_full_tab(g->tab, g->size, g->size) &&
			!ft_can_score_line(g->tab, g->size, g->size) &&
				!ft_can_score_line(g->tab, g->size, g->size))
	{
		endwin();
		if (ft_win(g))
			ft_you_win();
		else
			ft_you_lose(g);
		exit(0);
	}
	if (!ft_full_tab(g->tab, g->size, g->size))
		ft_add_random_value(g, 1);
}

void	ft_left(t_game *g)
{
	ft_move_left(g);
	ft_score_left(g);
	ft_move_left(g);
	if (ft_win(g))
	{
		endwin();
		ft_you_win();
		exit(0);
	}
	if (ft_full_tab(g->tab, g->size, g->size) &&
			!ft_can_score_line(g->tab, g->size, g->size) &&
				!ft_can_score_line(g->tab, g->size, g->size))
	{
		endwin();
		if (ft_win(g))
			ft_you_win();
		else
			ft_you_lose(g);
		exit(0);
	}
	if (!ft_full_tab(g->tab, g->size, g->size))
		ft_add_random_value(g, 1);
}

void	ft_esc(void)
{
	endwin();
	ft_putstr("You give up  !!!!\n");
	exit(0);
}
