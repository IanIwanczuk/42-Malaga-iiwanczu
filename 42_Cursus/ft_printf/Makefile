CC = gcc
CFLAGS = -Wall -Werror -Wextra
NAME = libftprintf.a
SRCS = ft_printf.c ft_printf_utils.c ft_print_ptr.c ft_print_hex.c ft_print_uint.c
OBJS = ${SRCS:.c=.o}
RM = rm -f
LIBC = ar rcs

${NAME}: ${OBJS}
	${MAKE} -C ./libft
	cp libft/libft.a ${NAME}
	${LIBC} ${NAME} ${OBJS}

all: ${NAME}

re: fclean all

clean:
	${MAKE} clean -C ./libft
	${RM} ${OBJS}

fclean: clean
	${MAKE} fclean -C ./libft
	${RM} ${NAME}

.PHONY: clean fclean all re