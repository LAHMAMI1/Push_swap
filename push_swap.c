/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 21:41:25 by olahmami          #+#    #+#             */
/*   Updated: 2023/03/24 15:47:50 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char **number(char **av)
{
	int i;
	char *join_av;
	char **split_av;
	
	join_av = ft_strdup("");
	i = 1;
	while (av[i])
	{
		join_av = ft_strjoin(join_av, av[i]);
		join_av = ft_strjoin(join_av, " ");
		i++;
	}
	split_av = ft_split(join_av, ' ');
	free(join_av);
	return(split_av);
}

int check_atoi(char *str)
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
		if ((str[i] >= 9 && str[i] <= 13) || ft_isdigit(str[i]) == 0)
			return(1);
		result = result * 10 + str[i] - 48;
		if (result * sign > INT32_MAX)
			return (1);
		else if (result * sign < INT32_MIN)
			return (1);
		i++;
	}
	return (0);
}

void is_integer(char **num)
{
	int i;
	
	i = 0;
	while (num[i])
	{
		if (check_atoi(num[i]) == 1)
		{
			ft_putstr_fd("Erreur, not integer\n", 2);
			exit(1);
		}
		i++;
	}
	
}

int main(int ac, char **av)
{
	// t_stack a;
	// t_stack b;
	char **split_av;

	if (ac < 2)
		exit(0);
	split_av = number(av);
	is_integer(split_av);
	// int i = 0;
	// while (split_av[i])
	// {
	// 	printf("%s\n", split_av[i]);
	// 	i++;
	// }
	
	return 0;
}
