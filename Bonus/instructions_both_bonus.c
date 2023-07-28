/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_both_bonus.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 02:18:40 by olahmami          #+#    #+#             */
/*   Updated: 2023/07/28 04:31:44 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	ss_bonus(t_stack **a, t_stack **b)
{
	swap(a);
	swap(b);
}

void	rr_bonus(t_stack **a, t_stack **b)
{
	rotate(a);
	rotate(b);
}

void	rrr_bonus(t_stack **a, t_stack **b)
{
	reverse_rotate(a);
	reverse_rotate(b);
}
