/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 22:03:40 by olahmami          #+#    #+#             */
/*   Updated: 2023/07/28 04:36:26 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_BONUS_H
# define CHECKER_BONUS_H

# include "../push_swap.h"
# include "../Get_next_line/get_next_line.h"

void	sa_bonus(t_stack **a);
void	sb_bonus(t_stack **b);
void	ss_bonus(t_stack **a, t_stack **b);
void	pa_bonus(t_stack **b, t_stack **a);
void	pb_bonus(t_stack **a, t_stack **b);
void	ra_bonus(t_stack **a);
void	rb_bonus(t_stack **b);
void	rr_bonus(t_stack **a, t_stack **b);
void	rra_bonus(t_stack **a);
void	rrb_bonus(t_stack **b);
void	rrr_bonus(t_stack **a, t_stack **b);

void	check_all_bonus(char **num);
int		check_sort_bonus(t_stack *a);
void	instructions(t_ps *stack, char *input);
void	checker(t_ps *stack);

#endif