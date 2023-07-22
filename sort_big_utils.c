/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 13:31:34 by olahmami          #+#    #+#             */
/*   Updated: 2023/07/22 03:43:38 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int *fill_arr(t_stack *a, int *arr)
{
	int i;

	arr = malloc(sizeof(int) * ft_lstsize(a));
	i = 0;
	while (a)
	{
		arr[i] = a->content;
		a = a->next;
		i++;
	}
	return (arr);
}

static void ft_swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int *sort_arr(t_stack **a,int *arr)
{
	int i;
	int j;
	
	(*a)->size_a = ft_lstsize(*a);
	i = 0;
	while (i < ((*a)->size_a - 1))
	{
		j = i + 1;
		while (j < (*a)->size_a)
		{
			if (arr[i] > arr[j])
				ft_swap(&arr[i], &arr[j]);
			j++;
		}
		i++;
	}
	return(arr);
}