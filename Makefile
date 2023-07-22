# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/26 15:36:54 by olahmami          #+#    #+#              #
#    Updated: 2023/07/21 21:34:36 by olahmami         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			=	cc
NAME		=	push_swap
CFLAGS		=	-Wall -Wextra -Werror #-g -fsanitize=address

SRCS		=	push_swap.c \
				check_ps.c \
				ft_lstnew.c \
				ft_lstlast.c \
				ft_lstadd_back.c \
				ft_lstsize.c \
				utils.c \
				instructions_a.c \
				instructions_b.c \
				instructions_both.c \
				sort.c \
				sort_utils.c \
				sort_big_utils.c \

LIBS		=	libft.a

#BONUS		=	push_swap_bonus

INCLUDES	=	$(LIBS:%=Libft/libft.a)

OBJ = ${SRCS:.c=.o}

all: $(LIBS) $(NAME)

$(NAME): $(OBJ)
	$(CC) -I includes $(CFLAGS) $(OBJ) $(INCLUDES) -o $(NAME)

libs: $(LIBS)

$(LIBS):
	@make -C Libft

#bonus: $(BONUS)

#$(BONUS):
#	@make -C Bonus

clean:
	@rm -f ${OBJ}
	@make -C Libft clean
#	@make -C Bonus clean

fclean: clean
	@rm -rf $(NAME)
	@rm -rf $(INCLUDES)
	@make -C Libft fclean
#	@make -C Bonus fclean

re: fclean all

.PHONY: all