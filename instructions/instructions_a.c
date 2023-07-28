/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_a.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 11:10:14 by olahmami          #+#    #+#             */
/*   Updated: 2023/07/28 04:23:16 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_stack **a)
{
	swap(a);
	ft_putstr_fd("sa\n", 1);
}

void	pa(t_stack **b, t_stack **a)
{
	push(b, a);
	ft_putstr_fd("pa\n", 1);
}

void	ra(t_stack **a)
{
	rotate(a);
	ft_putstr_fd("ra\n", 1);
}

void	rra(t_stack **a)
{
	reverse_rotate(a);
	ft_putstr_fd("rra\n", 1);
}
