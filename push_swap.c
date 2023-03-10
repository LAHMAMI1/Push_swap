/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 21:41:25 by olahmami          #+#    #+#             */
/*   Updated: 2023/03/08 19:44:15 by olahmami         ###   ########.fr       */
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
	
	return 0;
}
