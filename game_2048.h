/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_2048.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbrathie <rbrathie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 10:35:23 by rbrathie          #+#    #+#             */
/*   Updated: 2015/03/04 14:34:36 by aemebiku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAME_2048_H
# define GAME_2048_H

# include <stdlib.h>
# include <time.h>
# include <ncurses.h>
# include "libft/libft.h"
# define ESCAPE 27

typedef enum	e_const
{
	WIN_VALUE = 16,
	GRILL_SIZE = 4
}				t_max_val;

typedef struct	s_coord
{
	int			row;
	int			col;
}				t_coord;

typedef struct	s_game
{
	int			size;
	int			score;
	int			**tab;
	int			*tmp;
	t_max_val	max_val;
}				t_game;

void			ft_init_game(t_game *g, int size);
void			ft_game(t_game *g);

void			ft_you_win(void);
void			ft_you_lose(t_game *g);

void			ft_usage(int i);
void			ft_print(int **tab, int a, int b);
void			ft_initialise_tab(t_game *e);
int				ft_puissance(int expo, int nbr);
void			ft_free_tab(t_game *g);

void			ft_debug(t_game *g);
int				ft_random(int modulo);
void			ft_add_random_value(t_game *g, int nb_value);
int				*ft_cpy_tab_1d(int *tab, int size);
void			ft_print_tab_int_1d(int *tab, int size);

void			ft_debug_cpy(t_game *g);
int				*ft_tab_cpy_1d(int *dst, int *src, int size);
void			ft_debug_nb_value_by_line(t_game *g);
int				ft_get_end_value_pos(int *tab, int size);
int				ft_get_start_value_pos(int *tab, int size);

void			ft_debug_start_end_value_line(t_game *g);
int				*ft_tab_cpy_col(int *dst, int **tab, int col, int size);
void			ft_debug_can_score(t_game *g);
int				ft_win(t_game *g);

int				ft_error(t_game *g);

int				ft_empty_case(t_game *g, int x, int y);
int				ft_get_nbr_value(int *tab, int size);
int				ft_full_tab(int **tab, int x, int y);
int				ft_can_score_line(int **tab, int x, int y);
int				ft_can_score_col(int **tab, int x, int y);

void			ft_move_right(t_game *g);
void			ft_move_right_01(t_game *g, int pos);
void			ft_move_left(t_game *g);
void			ft_move_left_01(t_game *g, int pos);

void			ft_move_up(t_game *g);
void			ft_move_up_01(t_game *g, int col);
void			ft_move_down(t_game *g);
void			ft_move_down_01(t_game *g, int col);

void			ft_score_right(t_game *g);
void			ft_score_right_01(t_game *g, int pos);
void			ft_score_left(t_game *g);
void			ft_score_left_01(t_game *g, int pos);

void			ft_score_down(t_game *g);
void			ft_score_down_01(t_game *g, int col);
void			ft_score_up(t_game *g);
void			ft_score_up_01(t_game *g, int col);

void			ft_init_ncurses(void);
void			ft_print_tab_ncusrses(t_game *g);
void			ft_display(t_game *g);
void			ft_update(t_game *g, int ch);

void			ft_up(t_game *g);
void			ft_down(t_game *g);
void			ft_right(t_game *g);
void			ft_left(t_game *g);
void			ft_esc(void);

int				ft_draw_row(t_game *s, t_coord c, int row_i, int col_j);
int				ft_draw_col(t_game *s, t_coord c, int row_i);
void			ft_draw_col_down(t_game *s, t_coord c, int row_i);
void			ft_draw(t_game *s, t_coord c);
void			ft_print_draw(t_game g, t_coord c);
void			init_curses(void);
#endif
