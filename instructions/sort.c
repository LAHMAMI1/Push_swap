/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 11:19:37 by olahmami          #+#    #+#             */
/*   Updated: 2023/07/28 04:23:41 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_2(t_stack **a)
{
	(*a)->size_a = ft_lstsize(*a);
	if ((*a)->size_a == 2)
	{
		sa(a);
		exit(0);
	}
}

void	sort_3(t_stack **a)
{
	int	max_i;

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

void	sort_4e5(t_ps *stack)
{
	int	size3;
	int	i;

	if (ft_lstsize(stack->a) == 4 || ft_lstsize(stack->a) == 5)
	{
		size3 = ft_lstsize(stack->a) - 3;
		i = 0;
		while (i < size3)
		{
			min_to_top(&stack->a);
			pb(&stack->a, &stack->b);
			i++;
		}
		sort_3(&stack->a);
		while (stack->b)
			pa(&stack->b, &stack->a);
		exit(0);
	}
}

void	sort_big(t_ps *stack)
{
	int	range;
	int	*arr;

	stack->a->size_a = ft_lstsize(stack->a);
	arr = malloc(sizeof(int) * stack->a->size_a);
	arr = sort_arr(stack->a, fill_arr(stack->a, arr));
	if (stack->a->size_a >= 6 && stack->a->size_a <= 15)
		range = 3;
	else if (stack->a->size_a <= 100)
		range = 20;
	else
		range = 40;
	if (stack->a->size_a >= 6)
		sort_ab(stack, arr, range);
	free(arr);
}
