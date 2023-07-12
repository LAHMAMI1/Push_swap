/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 11:19:37 by olahmami          #+#    #+#             */
/*   Updated: 2023/07/12 19:33:45 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort_2(t_stack **a, int ac)
{
	if (ac == 3)
	{
		sa(a);
		exit(0);
	}
}

void sort_3(t_stack **a)
{
	int max_i;

	max_i = max_location(*a);
	(*a)->size_a = ft_lstsize(*a);
	if ((*a)->size_a == 3)
	{
		if (max_i == 0)
			ra(a);
		else if (max_i == 1)
			rra(a);
		if ((*a)->content > (*a)->next->content)
			sa(a);
	}
}

void sort_4e5(t_ps *stack)
{
	int size3;
	int i;

	size3 = ft_lstsize(stack->a) - 3;
	i = 0;
	while (i < size3)
	{
		min_to_top(&stack->a, min_a(stack->a));
		pb(&stack->a, &stack->b);
		i++;
	}
	sort_3(&stack->a);
	while (stack->b)
		pa(&stack->a, &stack->b);
}