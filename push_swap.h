/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 21:41:29 by olahmami          #+#    #+#             */
/*   Updated: 2023/07/05 19:23:59 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "Libft/libft.h"
#include <stdio.h>

typedef struct s_stack
{
	int content;
	struct s_stack *next;
} t_stack;

// typedef struct s_ps
// {
	
// } t_ps;

//push_swap.c
char **number(char **av);

//check_ps
void check_integer(char **num);
void check_dup_sort(char **num);

//utils
t_stack *ft_lstnew(int content);
void ft_lstadd_front(t_stack **lst, t_stack *new);
int ft_lstsize(t_stack *lst);
t_stack	*ft_lstlast(t_stack *lst);
void ft_lstadd_back(t_stack **lst, t_stack *new);
void ft_lstdelone(t_stack *lst, void (*del)(void*));
void ft_lstclear(t_stack **lst, void (*del)(void*));

#endif