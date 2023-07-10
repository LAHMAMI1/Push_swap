/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 17:07:51 by olahmami          #+#    #+#             */
/*   Updated: 2023/07/10 19:00:54 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void swap(t_stack** src)
{
    t_stack* tmp;

	if (!(*src) && !(*src)->next)
		return ;
	tmp = (t_stack*)malloc(sizeof(t_stack));
    tmp->content = (*src)->content;
    (*src)->content = (*src)->next->content;
    (*src)->next->content = tmp->content;
	free(tmp);
}

void push(t_stack **src, t_stack **dst)
{
	t_stack *tmp;

	if (!*src)
		return ;
	tmp = (t_stack *)malloc(sizeof(t_stack));
	tmp->content = (*src)->content;
	tmp->next = *dst;
	*dst = tmp;
	tmp = *src;
	*src = (*src)->next;
	free(tmp);
}

void rotate(t_stack** src)
{
    t_stack* tmp;
    t_stack* last;

    if (!(*src) || !(*src)->next)
        return;

    tmp = *src;
    *src = (*src)->next;
    last = ft_lstlast(*src);
    last->next = tmp;
    tmp->next = NULL;
}

void reverse_rotate(t_stack **src)
{
	t_stack *tmp;
	t_stack *last;

	if (!*src && !(*src)->next)
		return ;
	last = *src;
	while (last->next->next)
		last = last->next;
	tmp = last->next;
	last->next = NULL;
	tmp->next = *src;
	*src = tmp;
}
