/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 21:55:47 by olahmami          #+#    #+#             */
/*   Updated: 2023/07/27 17:14:00 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	instructions(t_ps *stack, char *input)
{
	if (!ft_strcmp(input, "sa\n"))
		sa(&(stack->a));
	else if (!ft_strcmp(input, "sb\n"))
		sb(&(stack->b));
	else if (!ft_strcmp(input, "ss\n"))
		ss(&(stack->a), &(stack->b));
	else if (!ft_strcmp(input, "pa\n"))
		pa(&(stack->b), &(stack->a));
	else if (!ft_strcmp(input, "pb\n"))
		pb(&(stack->a), &(stack->b));
	else if (!ft_strcmp(input, "ra\n"))
		ra(&(stack->a));
	else if (!ft_strcmp(input, "rb\n"))
		rb(&(stack->b));
	else if (!ft_strcmp(input, "rr\n"))
		rr(&(stack->a), &(stack->b));
	else if (!ft_strcmp(input, "rra\n"))
		rra(&(stack->a));
	else if (!ft_strcmp(input, "rrb\n"))
		rrb(&(stack->b));
	else if (!ft_strcmp(input, "rrr\n"))
		rrr(&(stack->a), &(stack->b));
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
	check_all(split_av);
	tab_to_list(split_av, &stack);
	checker(&stack);
	if (check_sort(stack.a) == 0 && !stack.b)
		ft_putstr_fd("OK\n", 1);
	else
		ft_putstr_fd("KO\n", 1);
	return (0);
}
