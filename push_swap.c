/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 21:41:25 by olahmami          #+#    #+#             */
/*   Updated: 2023/03/28 12:14:28 by olahmami         ###   ########.fr       */
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

int main(int ac, char **av)
{
	// t_stack a;
	// t_stack b;
	char **split_av;

	if (ac < 2)
		exit(0);
	split_av = number(av);
	check_integer(split_av);
	check_dup(split_av);
	int i = 0;
	while (split_av[i])
	{
		printf("%s\n", split_av[i]);
		i++;
	}
	
	return 0;
}
