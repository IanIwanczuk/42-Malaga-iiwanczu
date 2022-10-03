SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_substr.c ft_strjoin.c ft_strtrim.c
OBJS = ${SRCS:.c=.o}
NAME = libft.a
RM = rm -f
CC = gcc
CFLAGS = -Wall -Werror -Wextra
RN = ranlib
LIBC = ar rcs

.c.o: ${SRCS}
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS}
	${RN} ${NAME}

all: ${NAME}

clean: 
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all