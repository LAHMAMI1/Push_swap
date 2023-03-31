/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 21:41:29 by olahmami          #+#    #+#             */
/*   Updated: 2023/03/31 17:56:41 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "Libft/libft.h"
#include <stdio.h>

typedef struct s_stack
{
	int data;
	struct s_stack *next;
} t_stack;

// typedef struct s_ps
// {
	
// } t_ps;

//push_swap.c
char **number(char **av);

//check_ps
void check_integer(char **num);
void check_dup(char **num);

//utils
t_stack *ft_lstnew(int *data);
t_stack	*ft_lstlast(t_stack *lst);
void ft_lstadd_back(t_stack **lst, t_stack *new);

#endif