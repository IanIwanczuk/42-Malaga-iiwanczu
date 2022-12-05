SRCS = ft_split.c
# SRCS_BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c
OBJS = ${SRCS:.c=.o}
# OBJS_BONUS = ${SRCS_BONUS:.c=.o}
NAME = libft.a
RM = rm -f
LIBC = ar rcs

all: ${NAME}

${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS}

# bonus: ${OBJS_BONUS} ${OBJS}
#	${LIBC} ${NAME} ${OBJS_BONUS} ${OBJS}

clean: 
	${RM} ${OBJS} ${OBJS_BONUS} 

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re