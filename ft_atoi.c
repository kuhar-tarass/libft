/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkuhar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 19:31:58 by tkuhar            #+#    #+#             */
/*   Updated: 2018/03/21 19:32:00 by tkuhar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	check(unsigned long long int result, char c, int nega)
{
	if (((result > 922337203685477580 && c) ||
		(result == 922337203685477580 && c > '7')) && nega == 1)
		return (-1);
	if (((result > 922337203685477580 && c) ||
			(result == 922337203685477580 && c > '8')) && nega == -1)
		return (0);
	return (1);
}

int			ft_atoi(const char *str)
{
	unsigned long long int	result;
	int						i;
	int						nega;

	nega = 1;
	result = 0;
	i = 0;
	while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\n' ||
	str[i] == '\t' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r'))
		i++;
	if (str[i] == '-')
		nega = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (check(result, str[i], nega) != 1)
			return (check(result, str[i], nega));
		result = result * 10 + str[i] - '0';
		i++;
	}
	return ((int)result * nega);
}
