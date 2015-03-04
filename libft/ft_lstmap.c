/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbrathie <rbrathie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 12:49:04 by rbrathie          #+#    #+#             */
/*   Updated: 2015/01/22 16:00:28 by rbrathie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*tmp;

	new = NULL;
	if (lst)
	{
		new = ft_lstnew(lst->content, lst->content_size);
		if (!new)
			return (new);
		tmp = f(new);
		new = tmp;
		while (lst->next)
		{
			lst = lst->next;
			tmp->next = ft_lstnew(lst->content, lst->content_size);
			if (!tmp->next)
				return (NULL);
			tmp->next = f(tmp->next);
			tmp = tmp->next;
		}
	}
	return (new);
}
