/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbrathie <rbrathie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 10:45:23 by rbrathie          #+#    #+#             */
/*   Updated: 2015/03/01 02:08:32 by rbrathie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game_2048.h"

int		main(int ac, char **av)
{
	t_game	g;
	time_t	t;

	(void)av;
	srand((unsigned int)time(&t));
	if (ac == 1)
	{
		ft_init_game(&g, GRILL_SIZE);
		if (!ft_error(&g))
			ft_game(&g);
		else
			ft_usage(0);
	}
	else
		ft_usage(1);
	return (0);
}
