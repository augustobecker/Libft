NAME		= Libft.a
CC 		= gcc
FLAGS 	= -Wall -Werror -Wextra
REMOVE 	= rm -f
SRCS 		= ft_isalpha.c 		\
			ft_isdigit.c 		\
			ft_isalnum.c 		\
			ft_isascii.c 		\
			ft_isprint.c 		\
			ft_strlen.c 		\
			ft_memset.c 		\
			ft_bzero.c 		\
			ft_memcpy.c 		\
			ft_memmove.c 		\
			ft_strlcpy.c 		\
			ft_strlcat.c 		\
			ft_toupper.c 		\
			ft_tolower.c 		\
			ft_strchr.c 		\
			ft_strrchr.c 		\
			ft_atoi.c 		\
			ft_strdup.c 		\
			ft_calloc.c 		\
			ft_strnstr.c 		\
			ft_itoa.c 		\
			ft_substr.c 		\
			ft_strjoin.c 		\
			ft_strtrim.c 		\
			ft_split.c 		\
			ft_itoa.c 		\
			ft_strmapi.c 		\
			ft_striteri.c 		\
			ft_putchar_fd.c 	\
			ft_putendl_fd.c 	\
			ft_putnbr_fd.c
OBJS 		= $(SRCS:.c=.o)

all:		${NAME}

${NAME}: 	${OBJS}
		ar rcs ${NAME} ${OBJS}

.c.o:
		${CC} {FLAGS} -c $< -o ${<:.c=.o}

clean:
		${REMOVE} ${OBJS}
		echo "Objects deleted"

fclean:	clean
		${REMOVE} ${NAME}
		echo "$(NAME) deleted"

re :		fclean all

.PHONY:	all clean fclean re
