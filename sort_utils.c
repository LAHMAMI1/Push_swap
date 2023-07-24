/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 14:55:02 by olahmami          #+#    #+#             */
/*   Updated: 2023/07/23 00:01:46 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int max_location(t_stack *ab)
{
	int max;
	int i;
	int max_i;

	i = 0;
	max = ab->content;
	max_i = 0;
	while (ab)
	{
		if (ab->content > max)
		{
			max = ab->content;
			max_i = i;
		}
		i++;
		ab = ab->next;
	}
	return (max_i);
}

int min_location(t_stack *a)
{
	int min;
	int i;
	int min_i;

	i = 0;
	min = a->content;
	min_i = 0;
	while (a)
	{
		if (a->content < min)
		{
			min = a->content;
			min_i = i;
		}
		i++;
		a = a->next;
	}
	return (min_i);
}

void min_to_top(t_stack **a)
{
	int size;
	int min_i;

	size = ft_lstsize(*a);
	min_i = min_location(*a);
	if (min_i == 0)
		return ;
	else if (min_i <= size / 2)
	{
		while (min_i > 0)
		{
			ra(a);
			min_i--;
		}
	}
	else if (min_i > size / 2)
	{
		min_i = size - min_i;
		while (min_i > 0)
		{
			rra(a);
			min_i--;
		}
	}
}

void max_to_top(t_stack **b)
{
	int size;
	int max_i;

	size = ft_lstsize(*b);
	max_i = max_location(*b);
	if (max_i == 0)
		return ;
	else if (max_i <= size / 2)
	{
		while (max_i > 0)
		{
			rb(b);
			max_i--;
		}
	}
	else if (max_i > size / 2)
	{
		max_i = size - max_i;
		while (max_i > 0)
		{
			rrb(b);
			max_i--;
		}
	}
}