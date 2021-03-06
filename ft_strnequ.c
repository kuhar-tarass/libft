/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkuhar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/25 16:54:02 by tkuhar            #+#    #+#             */
/*   Updated: 2018/03/25 16:54:04 by tkuhar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;

	i = 0;
	if ((!s1 && s2) || (!s2 && s1))
		return (0);
	while (s1 && s2 && n-- > 0)
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	return (1);
}
