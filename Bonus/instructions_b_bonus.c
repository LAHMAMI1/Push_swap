/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_b_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 02:18:15 by olahmami          #+#    #+#             */
/*   Updated: 2023/07/28 04:31:35 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	sb_bonus(t_stack **b)
{
	swap(b);
}

void	pb_bonus(t_stack **a, t_stack **b)
{
	push(a, b);
}

void	rb_bonus(t_stack **b)
{
	rotate(b);
}

void	rrb_bonus(t_stack **b)
{
	reverse_rotate(b);
}
