/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 17:07:51 by olahmami          #+#    #+#             */
/*   Updated: 2023/03/31 17:56:20 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack *ft_lstnew(int *data)
{
	t_stack *node;
	
	node = malloc(sizeof(t_stack));
	if (!node)
		return (0);
	node->data = data;
	node->next = NULL;
	return (node);
}

t_stack	*ft_lstlast(t_stack *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

void ft_lstadd_back(t_stack **lst, t_stack *new)
{
	t_stack *tmp;

	if (!lst)
		return ;
	if (!*lst)
		*lst = new;
	tmp = ft_lstlast(lst);
	tmp->next = new;
}
