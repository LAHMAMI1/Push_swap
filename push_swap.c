/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 21:41:25 by olahmami          #+#    #+#             */
/*   Updated: 2023/07/27 23:22:44 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_ps	stack;
	char	**split_av;

	if (ac < 2)
		exit(0);
	stack.a = NULL;
	stack.b = NULL;
	split_av = number(av);
	check_all(split_av);
	tab_to_list(split_av, &stack);
	sort_2(&stack.a);
	sort_3(&stack.a);
	sort_4e5(&stack);
	sort_big(&stack);
	return (0);
}
