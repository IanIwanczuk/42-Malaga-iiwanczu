CC = gcc
CFLAGS = -Wall -Werror -Wextra
NAME = libftprintf.a
SRCS = ft_printf.c ft_printf_utils.c
OBJS = ${SRCS:.c=.o}
LIBFT = ./libft/libft.a
RM = rm -f
LIBC = ar rcs

${NAME}: ${OBJS}
	${MAKE} -C ./libft
	cp libft/libft.a ${NAME}
	${LIBC} ${NAME} ${OBJS}

all: ${NAME}

re: fclean all

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

.PHONY: clean fclean all re