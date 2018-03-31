/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpush_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkuhar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 18:18:10 by tkuhar            #+#    #+#             */
/*   Updated: 2018/03/29 18:18:11 by tkuhar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstpush_back(t_list **begin_list, void const *content,
	size_t content_size)
{
	t_list	*tmp;

	if (!*begin_list)
		*begin_list = ft_lstnew(content, content_size);
	tmp = *begin_list;
	while (tmp && tmp->next)
		tmp = tmp->next;
	tmp->next = ft_lstnew(content, content_size);
}
