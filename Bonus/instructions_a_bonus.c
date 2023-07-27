/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_a_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 02:17:52 by olahmami          #+#    #+#             */
/*   Updated: 2023/07/27 16:10:55 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	sa(t_stack **a)
{
	swap(a);
}

void	pa(t_stack **b, t_stack **a)
{
	push(b, a);
}

void	ra(t_stack **a)
{
	rotate(a);
}

void	rra(t_stack **a)
{
	reverse_rotate(a);
}
