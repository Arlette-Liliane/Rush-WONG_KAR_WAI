/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbrathie <rbrathie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/21 20:11:40 by rbrathie          #+#    #+#             */
/*   Updated: 2015/01/22 12:06:49 by rbrathie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list		*new;

	if ((new = (t_list *)malloc(sizeof(*new))))
	{
		new->content = (void *)content;
		if (!content)
			new->content_size = 0;
		else
			new->content_size = content_size;
		new->next = NULL;
	}
	return (new);
}
