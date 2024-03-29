/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_ps.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 12:14:51 by olahmami          #+#    #+#             */
/*   Updated: 2023/07/28 04:23:47 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	check_atoi(char *str)
{
	int		i;
	long	result;
	int		sign;

	i = 0;
	result = 0;
	sign = 1;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	if ((str[i - 1] == '-' || str[i - 1] == '+')
		&& (str[i] == '\0' || str[i] == '+'))
		return (1);
	while (str[i])
	{
		if (ft_isdigit(str[i]) == 0)
			return (1);
		result = result * 10 + str[i++] - 48;
		if (result * sign > INT32_MAX || result * sign < INT32_MIN)
			return (1);
	}
	return (0);
}

void	check_integer(char **num)
{
	int	i;

	i = 0;
	while (num[i])
	{
		if (check_atoi(num[i]) == 1)
			print_error();
		i++;
	}
}

void	check_dup(char **num)
{
	int	i;
	int	j;

	i = 0;
	while (num[i])
	{
		j = i + 1;
		while (num[j])
		{
			if (ft_atoi(num[i]) == ft_atoi(num[j]))
				print_error();
			j++;
		}
		i++;
	}
}

void	check_sort(char **num)
{
	int	i;
	int	j;

	i = 0;
	while (num[i])
	{
		j = i + 1;
		while (num[j])
		{
			if (ft_atoi(num[i]) > ft_atoi(num[j]))
				return ;
			j++;
		}
		i++;
	}
	exit(0);
}

void	check_all(char **num)
{
	check_integer(num);
	check_dup(num);
	check_sort(num);
}
