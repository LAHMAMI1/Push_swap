# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/26 15:36:54 by olahmami          #+#    #+#              #
#    Updated: 2023/07/28 04:33:48 by olahmami         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			=	cc
NAME		=	push_swap

CFLAGS		=	-Wall -Wextra -Werror

SRCS		=	push_swap.c \
				./utils/check_ps.c \
				./utils/ft_lists.c \
				./utils/utils.c \
				./utils/utils2.c \
				./instructions/instructions_a.c \
				./instructions/instructions_b.c \
				./instructions/instructions_both.c \
				./instructions/sort.c \
				./utils/sort_utils.c \
				./utils/sort_big_utils.c \
				
SRC_BONUS   =   ./Bonus/checker_bonus.c \
				./utils/check_ps.c \
				./utils/ft_lists.c \
				./utils/utils.c \
				./utils/utils2.c \
				./Bonus/instructions_a_bonus.c \
				./Bonus/instructions_b_bonus.c \
				./Bonus/instructions_both_bonus.c \
				./Get_next_line/get_next_line_utils.c \
				./Get_next_line/get_next_line.c 

LIBS		=	libft.a

BONUS		=	checker

INCLUDES	=	$(LIBS:%=Libft/libft.a)

INCLUDES_bonus	=	$(LIBS:%=./Libft/libft.a)

OBJ         =   ${SRCS:.c=.o}

OBJ_bonus   =   ${SRC_BONUS:.c=.o}

all: $(LIBS) $(NAME)

$(NAME): $(OBJ)
	$(CC) -I includes $(CFLAGS) $(OBJ) $(INCLUDES) -o $(NAME)

libs: $(LIBS)

$(LIBS):
	@make -C Libft

bonus: $(LIBS) $(BONUS)

$(BONUS): $(OBJ_bonus)
	$(CC) -I includes $(CFLAGS) $(OBJ_bonus) $(INCLUDES_bonus) -o $(BONUS)

clean:
	@rm -f ${OBJ} $(OBJ_bonus)
	@make -C Libft clean

fclean: clean
	@rm -rf $(NAME) $(BONUS) $(OBJ_bonus) $(INCLUDES) $(INCLUDES_bonus)
	@make -C Libft fclean

re: fclean all

.PHONY: all