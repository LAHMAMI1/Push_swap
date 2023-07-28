/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 21:55:47 by olahmami          #+#    #+#             */
/*   Updated: 2023/07/28 04:36:11 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

int	check_sort_bonus(t_stack *a)
{
	if (!a || !a->next)
		return (0);
	while (a->next)
	{
		if (a->content > a->next->content)
			return (1);
		a = a->next;
	}
	return (0);
}

void	check_all_bonus(char **num)
{
	check_integer(num);
	check_dup(num);
}

void	instructions(t_ps *stack, char *input)
{
	if (!ft_strcmp(input, "sa\n"))
		sa_bonus(&(stack->a));
	else if (!ft_strcmp(input, "sb\n"))
		sb_bonus(&(stack->b));
	else if (!ft_strcmp(input, "ss\n"))
		ss_bonus(&(stack->a), &(stack->b));
	else if (!ft_strcmp(input, "pa\n"))
		pa_bonus(&(stack->b), &(stack->a));
	else if (!ft_strcmp(input, "pb\n"))
		pb_bonus(&(stack->a), &(stack->b));
	else if (!ft_strcmp(input, "ra\n"))
		ra_bonus(&(stack->a));
	else if (!ft_strcmp(input, "rb\n"))
		rb_bonus(&(stack->b));
	else if (!ft_strcmp(input, "rr\n"))
		rr_bonus(&(stack->a), &(stack->b));
	else if (!ft_strcmp(input, "rra\n"))
		rra_bonus(&(stack->a));
	else if (!ft_strcmp(input, "rrb\n"))
		rrb_bonus(&(stack->b));
	else if (!ft_strcmp(input, "rrr\n"))
		rrr_bonus(&(stack->a), &(stack->b));
	else
		(free(input), print_error());
}

void	checker(t_ps *stack)
{
	char	*input;

	input = get_next_line(0);
	while (input)
	{
		instructions(stack, input);
		free(input);
		input = get_next_line(0);
	}
}

int	main(int ac, char **av)
{
	t_ps	stack;
	char	**split_av;

	if (ac < 2)
		exit(0);
	stack.a = NULL;
	stack.b = NULL;
	split_av = number(av);
	check_all_bonus(split_av);
	tab_to_list(split_av, &stack);
	checker(&stack);
	if (check_sort_bonus(stack.a) == 0 && !stack.b)
		ft_putstr_fd("OK\n", 1);
	else
		ft_putstr_fd("KO\n", 1);
	return (0);
}
