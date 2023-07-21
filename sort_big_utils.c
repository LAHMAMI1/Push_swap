/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 13:31:34 by olahmami          #+#    #+#             */
/*   Updated: 2023/07/15 13:50:20 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int *fill_arr(t_stack *a, int *arr)
{
	int i;

	i = 0;
	while (a)
	{
		arr[i] = a->content;
		a = a->next;
		i++;
	}
	return (arr);
}

