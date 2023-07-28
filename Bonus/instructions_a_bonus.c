/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_a_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 02:17:52 by olahmami          #+#    #+#             */
/*   Updated: 2023/07/28 04:31:26 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	sa_bonus(t_stack **a)
{
	swap(a);
}

void	pa_bonus(t_stack **b, t_stack **a)
{
	push(b, a);
}

void	ra_bonus(t_stack **a)
{
	rotate(a);
}

void	rra_bonus(t_stack **a)
{
	reverse_rotate(a);
}
