NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

SRCS = 	ft_isdigit.c \
		ft_isprint.c \
		ft_strlen.c \
		ft_memset.c \
		ft_bzero.c \
		ft_atoi.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_split.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_strcmp.c

OBJ = ${SRCS:.c=.o}

all : ${NAME}

${NAME} : ${OBJ}
	ar rc ${NAME} ${OBJ}

clean :
	rm -f ${OBJ}

fclean : clean
	rm -f ${NAME}

re: fclean all

.PHONY: all
