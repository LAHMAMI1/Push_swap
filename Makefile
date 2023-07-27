# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/26 15:36:54 by olahmami          #+#    #+#              #
#    Updated: 2023/07/27 03:07:36 by olahmami         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			=	cc
NAME		=	push_swap

CFLAGS		=	-Wall -Wextra -Werror

SRCS		=	push_swap.c \
				check_ps.c \
				ft_lists.c \
				utils.c \
				utils2.c \
				instructions_a.c \
				instructions_b.c \
				instructions_both.c \
				sort.c \
				sort_utils.c \
				sort_big_utils.c \
				
SRC_BONUS   =   ./bonus/checker_bonus.c \
				./bonus/check_ps_bonus.c \
				./bonus/ft_lists_bonus.c \
				./bonus/utils_bonus.c \
				./bonus/utils2_bonus.c \
				./bonus/instructions_a_bonus.c \
				./bonus/instructions_b_bonus.c \
				./bonus/instructions_both_bonus.c \
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