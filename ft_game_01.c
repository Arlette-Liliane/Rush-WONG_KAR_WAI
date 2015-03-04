/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_game_01.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbrathie <rbrathie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 01:51:02 by rbrathie          #+#    #+#             */
/*   Updated: 2015/03/01 02:05:41 by rbrathie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game_2048.h"

void	ft_you_win(void)
{
	ft_putstr("You Win !!!");
}

void	ft_you_lose(t_game *g)
{
	ft_putstr("You lose with points : ");
	ft_putnbr(g->score);
	ft_putstr("\n");
}
