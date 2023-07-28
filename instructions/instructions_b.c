/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_b.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 11:10:18 by olahmami          #+#    #+#             */
/*   Updated: 2023/07/28 04:23:30 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sb(t_stack **b)
{
	swap(b);
	ft_putstr_fd("sb\n", 1);
}

void	pb(t_stack **a, t_stack **b)
{
	push(a, b);
	ft_putstr_fd("pb\n", 1);
}

void	rb(t_stack **b)
{
	rotate(b);
	ft_putstr_fd("rb\n", 1);
}

void	rrb(t_stack **b)
{
	reverse_rotate(b);
	ft_putstr_fd("rrb\n", 1);
}
