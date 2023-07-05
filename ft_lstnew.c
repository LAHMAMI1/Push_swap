/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 13:59:15 by olahmami          #+#    #+#             */
/*   Updated: 2023/07/05 18:12:04 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack *ft_lstnew(int content)
{
	t_stack *node;
	
	node = malloc(sizeof(t_stack));
	if (!node)
		return (0);
	node->content = content;
	node->next = NULL;
	return (node);
}
