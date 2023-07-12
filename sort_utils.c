/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 14:55:02 by olahmami          #+#    #+#             */
/*   Updated: 2023/07/12 19:34:17 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int max_location(t_stack *a)
{
	int max;
	int i;
	int max_i;

	i = 0;
	max = a->content;
	max_i = 0;
	while (a)
	{
		if (a->content > max)
		{
			max = a->content;
			max_i = i;
		}
		i++;
		a = a->next;
	}
	return (max_i);
}

int min_a(t_stack *a)
{
	int min;

	min = a->content;
	while (a)
	{
		if (a->content < min)
			min = a->content;
		a = a->next;
	}
	return (min);
}

void min_to_top(t_stack **a, int min)
{
	int i;
	int size;
	int min_i;

	i = 0;
	size = ft_lstsize(*a);
	min_i = 0;
	while (i < size && (*a)->content != min)
	{
		if ((*a)->content == min)
			min_i = i;
		ra(a);
		i++;
	}
	if (min_i > size / 2)
	{
		min_i = size - min_i;
		while (min_i > 0)
		{
			rra(a);
			min_i--;
		}
	}
}