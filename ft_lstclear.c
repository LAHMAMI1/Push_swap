/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 17:46:04 by olahmami          #+#    #+#             */
/*   Updated: 2023/07/05 18:11:52 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_lstclear(t_stack **lst, void (*del)(void*))
{
	t_stack *nextNode;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		nextNode = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = nextNode;
	}

	*lst = NULL;
}