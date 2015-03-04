/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_auxi_01.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbrathie <rbrathie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 13:17:00 by rbrathie          #+#    #+#             */
/*   Updated: 2015/02/28 15:50:19 by rbrathie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game_2048.h"

void	ft_debug(t_game *g)
{
	ft_putstr("----------------------------\n");
	ft_putstr("Size : ");
	ft_putnbr(g->size);
	ft_putstr("\nScore : ");
	ft_putnbr(g->score);
	ft_putstr("\nMax_val : ");
	ft_putnbr(g->max_val);
	ft_putstr("\n---TABLEAU---\n");
	ft_print(g->tab, g->size, g->size);
	ft_putstr("____________________________\n");
}

int		ft_random(int modulo)
{
	return (rand() % modulo);
}

void	ft_add_random_value(t_game *g, int nb_value)
{
	int		i;
	int		tab[2];

	i = 0;
	while (i < nb_value)
	{
		tab[0] = ft_random(g->size);
		tab[1] = ft_random(g->size);
		if (ft_empty_case(g, tab[0], tab[1]))
		{
			if (ft_random(2))
				g->tab[tab[0]][tab[1]] = 2;
			else
				g->tab[tab[0]][tab[1]] = 4;
			i++;
		}
	}
}

int		*ft_cpy_tab_1d(int *tab, int size)
{
	int		i;
	int		*cpy_tab;

	i = 0;
	cpy_tab = NULL;
	if ((cpy_tab = (int *)malloc(sizeof(*cpy_tab) * size)))
	{
		while (i < size)
		{
			cpy_tab[i] = tab[i];
			i++;
		}
	}
	return (cpy_tab);
}

void	ft_print_tab_int_1d(int *tab, int size)
{
	int		i;

	i = 0;
	while (i < size)
	{
		ft_putnbr(tab[i]);
		ft_putchar(' ');
		i++;
	}
	ft_putchar('\n');
}
