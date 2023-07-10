/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 21:41:25 by olahmami          #+#    #+#             */
/*   Updated: 2023/07/10 19:00:11 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char **number(char **av)
{
	int i;
	char *join_av;
	char **split_av;
	
	i = 1;
	while (av[i])
	{
		if (check_empty(av[i]) == 0)
			print_error();
		i++;
	}
	join_av = ft_strdup("");
	i = 1;
	while (av[i])
	{
		join_av = ft_strjoin(join_av, av[i]);
		join_av = ft_strjoin(join_av, " ");
		i++;
	}
	split_av = ft_split(join_av, ' ');
	free(join_av);
	return(split_av);
}

void tab_to_list(char **split_av, t_ps *stack)
{
	t_stack *node;
	int i;

	stack->a = NULL;
	i = 0;
	while (split_av[i])
	{
		node = ft_lstnew(ft_atoi(split_av[i]));
		ft_lstadd_back(&stack->a, node);
		i++;
	}
}


int main(int ac, char **av)
{
	t_ps stack;
	char **split_av;

	if (ac < 2)
		exit(0);
	split_av = number(av);
	check_all(split_av);
	tab_to_list(split_av, &stack);
	// while (stack.a)
	// {
	// 	printf("stack->(%d)\n", stack.a->content);
	// 	stack.a = stack.a->next;
	// }
	
	// swap(&stack.a);
	// printf("stack->(%d)\n", stack.a->content);
	// printf("stack->(%d)\n\n", stack.a->next->content);

	// push(&stack.a, &stack.b);
	// printf("stack a->(%d)\n", stack.a->content);
	// printf("stack b->(%d)\n\n", stack.b->content);
	
	// rotate(&stack.a);
	// printf("stack->(%d)\n", stack.a->content);
	// printf("stack->(%d)\n", stack.a->next->content);
	// printf("stack->(%d)\n", stack.a->next->next->content);
	// printf("stack->(%d)\n\n", stack.a->next->next->next->content);

	reverse_rotate(&stack.a);
	printf("stack->(%d)\n", stack.a->content);
	printf("stack->(%d)\n", stack.a->next->content);
	printf("stack->(%d)\n", stack.a->next->next->content);
	printf("stack->(%d)\n\n", stack.a->next->next->next->content);
	
	return 0;
}
