/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 21:55:47 by olahmami          #+#    #+#             */
/*   Updated: 2023/07/27 05:39:34 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

int instructions(t_ps *stack, char *input)
{
	if (!ft_strncmp(input, "sa\n", 4))
		return ((sa(&(stack->a))), 1);
	else if (!ft_strncmp(input, "sb\n", 4))
		return (sb(&(stack->b)), 1);
	else if (!ft_strncmp(input, "ss\n", 4))
		return (ss(&(stack->a), &(stack->b)), 1);
	else if (!ft_strncmp(input, "pa\n", 4))
		return (pa(&(stack->b), &(stack->a)), 1);
	else if (!ft_strncmp(input, "pb\n", 4))
		return (pb(&(stack->a), &(stack->b)), 1);
	else if (!ft_strncmp(input, "ra\n", 4))
		return (ra(&(stack->a)), 1);
	else if (!ft_strncmp(input, "rb\n", 4))
		return (rb(&(stack->b)), 1);
	else if (!ft_strncmp(input, "rr\n", 4))
		return (rr(&(stack->a), &(stack->b)), 1);
	else if (!ft_strncmp(input, "rra\n", 5))
		return (rra(&(stack->a)), 1);
	else if (!ft_strncmp(input, "rrb\n", 5))
		return (rrb(&(stack->b)), 1);
	else if (!ft_strncmp(input, "rrr\n", 5))
		return (rrr(&(stack->a), &(stack->b)), 1);
	else
		return (0);		
}

void checker(t_ps *stack)
{
	char *input;

	input = get_next_line(0);
	while (input)
	{
		if(instructions(stack, input))
		{
			free(input);
			input = get_next_line(0);
		}
		else
			print_error();
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
