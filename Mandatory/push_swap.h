/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 21:41:29 by olahmami          #+#    #+#             */
/*   Updated: 2023/07/26 04:48:31 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "Libft/libft.h"

typedef struct s_stack
{
	int				content;
	int				size_a;
	struct s_stack	*next;
}t_stack;

typedef struct s_ps
{
	t_stack	*a;
	t_stack	*b;
}t_ps;

//push_swap
char	**number(char **av);
void	tab_to_list(char **split_av, t_ps *stack);
void	swap(t_stack **src);
void	push(t_stack **src, t_stack **dst);
void	rotate(t_stack **src);
void	reverse_rotate(t_stack **src);

//instructions
void	sa(t_stack **a);
void	sb(t_stack **b);
void	ss(t_stack **a, t_stack **b);
void	pa(t_stack **b, t_stack **a);
void	pb(t_stack **a, t_stack **b);
void	ra(t_stack **a);
void	rb(t_stack **b);
void	rr(t_stack **a, t_stack **b);
void	rra(t_stack **a);
void	rrb(t_stack **b);
void	rrr(t_stack **a, t_stack **b);

//sort
void	sort_2(t_stack **a);
void	sort_3(t_stack **a);
void	sort_4e5(t_ps *stack);
void	sort_big(t_ps *stack);
//sort_utils
int		max_location(t_stack *a);
int		min_location(t_stack *a);
void	min_to_top(t_stack **a);
void	max_to_top(t_stack **b);

//sort_big_utils
int		*fill_arr(t_stack *a, int *arr);
int		*sort_arr(t_stack *a, int *arr);
void	sort_atob(t_ps *stack, int *arr, int range);

//check_ps
int		check_empty(char *num);
void	check_integer(char **num);
void	check_dup(char **num);
void	check_sort(char **num);
void	check_all(char **num);
void	print_error(void);

//utils
t_stack	*ft_lstnew(int content);
int		ft_lstsize(t_stack *lst);
t_stack	*ft_lstlast(t_stack *lst);
void	ft_lstadd_back(t_stack **lst, t_stack *new);
char	**ft_free(char **p);

#endif