/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_auxi_02.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbrathie <rbrathie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 15:44:05 by rbrathie          #+#    #+#             */
/*   Updated: 2015/02/28 23:10:26 by rbrathie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game_2048.h"

void	ft_debug_cpy(t_game *g)
{
	int		i;

	i = 0;
	ft_putstr("-Fonction debug_cpy_tab-\n");
	while (i < g->size)
	{
		g->tmp = ft_tab_cpy_col(g->tmp, g->tab, i, g->size);
		ft_print_tab_int_1d(g->tmp, g->size);
		i++;
	}
	ft_putstr("_Fonction debug_cpy_tab_\n");
}

int		*ft_tab_cpy_1d(int *dst, int *src, int size)
{
	int		i;

	i = 0;
	while (i < size)
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}

void	ft_debug_nb_value_by_line(t_game *g)
{
	int		i;

	i = 0;
	ft_putstr("-Fonction debug nb value by line-\n");
	while (i < g->size)
	{
		ft_putnbr(ft_get_nbr_value(g->tab[i], g->size));
		ft_putchar(' ');
		i++;
	}
	ft_putstr("\n-Fin debug nb value by line-\n");
}

int		ft_get_end_value_pos(int *tab, int size)
{
	int		i;

	i = size;
	while (i > 0)
	{
		if (tab[i - 1] != 0)
			return (i - 1);
		i--;
	}
	return (0);
}

int		ft_get_start_value_pos(int *tab, int size)
{
	int		i;

	i = 0;
	while (i < size)
	{
		if (tab[i] != 0)
			return (i);
		i++;
	}
	return (0);
}
