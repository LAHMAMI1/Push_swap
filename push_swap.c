/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 21:41:25 by olahmami          #+#    #+#             */
/*   Updated: 2023/07/22 03:43:22 by olahmami         ###   ########.fr       */
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
	stack.a = NULL;
	stack.b = NULL;
	split_av = number(av);
	check_all(split_av);
	tab_to_list(split_av, &stack);
	// sort_2(&stack.a);
	// sort_3(&stack.a);
	// sort_4e5(&stack);
	// sort_100(&stack);
	int *arr = NULL;
	arr = fill_arr(stack.a, arr);
	arr = sort_arr(&stack.a, arr);
	int i = 0;
	while (arr[i])
	{
		printf("%d\n", arr[i]);
		i++;
	}
	// while (stack.a)
	// {
	// 	printf("stack->(%d)\n", stack.a->content);
	// 	stack.a = stack.a->next;
	// }
	
	// while (stack.b)
	// {
	// 	printf("stack b->(%d)\n", stack.b->content);
	// 	stack.b = stack.b->next;
	// }

	return (0);
}
