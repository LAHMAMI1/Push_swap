/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 02:19:33 by olahmami          #+#    #+#             */
/*   Updated: 2023/07/27 02:19:34 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

char	**number(char **av)
{
	int		i;
	char	*join_av;
	char	**split_av;

	i = 1;
	while (av[i])
	{
		if (check_empty(av[i]) == 0)
			print_error();
		i++;
	}
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
	return (split_av);
}

void	tab_to_list(char **split_av, t_ps *stack)
{
	t_stack	*node;
	int		i;

	stack->a = NULL;
	i = 0;
	while (split_av[i])
	{
		node = ft_lstnew(ft_atoi(split_av[i]));
		ft_lstadd_back(&stack->a, node);
		i++;
	}
}

int	check_empty(char *num)
{
	int	i;

	i = 0;
	while (num[i])
	{
		if (ft_isprint(num[i]) && !(num[i] == '\f' || num[i] == '\n'
				|| num[i] == '\r' || num[i] == '\t'
				|| num[i] == '\v' || num[i] == ' '))
			return (1);
		i++;
	}
	return (0);
}

void	print_error(void)
{
	ft_putstr_fd("Error\n", 2);
	exit(1);
}
