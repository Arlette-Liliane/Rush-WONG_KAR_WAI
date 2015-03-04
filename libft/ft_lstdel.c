/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbrathie <rbrathie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 12:30:34 by rbrathie          #+#    #+#             */
/*   Updated: 2015/01/22 15:34:38 by rbrathie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list		*tmp;
	t_list		*tmp1;

	tmp = *alst;
	if (alst)
	{
		while (tmp)
		{
			tmp1 = tmp;
			tmp = tmp->next;
			ft_lstdelone(&tmp1, del);
		}
		*alst = NULL;
	}
}
