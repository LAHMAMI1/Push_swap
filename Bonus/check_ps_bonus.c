/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_ps_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 02:17:06 by olahmami          #+#    #+#             */
/*   Updated: 2023/07/27 02:17:10 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

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

int	check_sort(t_stack *a)
{
	if (!a || !a->next)
        return 0;
	while (a->next)
	{
		if (a->content > a->next->content)
			return (1);
		a = a->next;
	}
	return (0);
}

void	check_all(char **num)
{
	check_integer(num);
	check_dup(num);
}
