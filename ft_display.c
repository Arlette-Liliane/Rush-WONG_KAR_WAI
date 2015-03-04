/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbrathie <rbrathie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 02:13:22 by rbrathie          #+#    #+#             */
/*   Updated: 2015/03/01 07:53:18 by rbrathie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game_2048.h"

void	ft_init_ncurses(void)
{
	initscr();
	raw();
	keypad(stdscr, true);
	noecho();
	if (has_colors() == false)
	{
		endwin();
		ft_putstr("Vous ne pouvez pas mettre de couleur\n");
	}
	start_color();
	init_pair(1, COLOR_GREEN, COLOR_BLACK);
	init_pair(2, COLOR_RED, COLOR_BLACK);
	curs_set(0);
}

void	ft_print_tab_ncusrses(t_game *g)
{
	int		ch;
	t_coord	c;

	while (42)
	{
		getmaxyx(stdscr, c.row, c.col);
		clear();
		if ((g->size * 10) > c.col || (g->size * 5) > c.row)
		{
			endwin();
			ft_putstr("Screen tail is too Short\n");
			exit(0);
		}
		ft_draw(g, c);
		ch = getch();
		ft_update(g, ch);
	}
}

void	ft_display(t_game *g)
{
	int		i;
	int		j;

	i = 0;
	attron(COLOR_PAIR(2));
	while (i < g->size)
	{
		j = 0;
		while (j < g->size)
		{
			move(i * i, j * j);
			printw("%d  ", g->tab[i][j]);
			j++;
		}
		printw("\n");
		i++;
	}
	attroff(COLOR_PAIR(2));
}

void	ft_update(t_game *g, int ch)
{
	refresh();
	if (ch == 27)
		ft_esc();
	if (ch == KEY_UP)
		ft_up(g);
	if (ch == KEY_DOWN)
		ft_down(g);
	if (ch == KEY_LEFT)
		ft_left(g);
	if (ch == KEY_RIGHT)
		ft_right(g);
}
