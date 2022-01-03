# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acesar-l <acesar-l@student.42sp.org>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/07 17:02:42 by acesar-l          #+#    #+#              #
#    Updated: 2021/09/07 17:17:31 by acesar-l         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

CC 		= clang

FLAGS 		= -Wall -Werror -Wextra

REMOVE 		= rm -f

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
			ft_strncmp.c		\
			ft_memchr.c		\
			ft_memcmp.c		\
			ft_strnstr.c		\
			ft_atoi.c 		\
			ft_strdup.c 		\
			ft_calloc.c 		\
			ft_strnstr.c 		\
			ft_itoa.c 		\
			ft_substr.c 		\
			ft_split.c 			\
			ft_strjoin.c 		\
			ft_strtrim.c		\
			ft_itoa.c 		\
			ft_strmapi.c 		\
			ft_striteri.c 		\
			ft_putchar_fd.c 	\
			ft_putstr_fd.c 		\
			ft_putendl_fd.c 	\
			ft_putnbr_fd.c

BONUS_SRCS  = ft_lstnew.c		\
			ft_lstadd_front.c	\
			ft_lstsize.c		\
			ft_lstlast.c		\
			ft_lstadd_back.c	\
			ft_lstdelone.c		\
			ft_lstclear.c		\
			ft_lstiter.c		\
			ft_lstmap.c

OBJS 		= $(SRCS:.c=.o)

BONUS_OBJS 	= $(BONUS_SRCS:.c=.o)

all:		${NAME}

${NAME}: 	${OBJS}
		ar rcs ${NAME} ${OBJS}

bonus:		${NAME} ${BONUS_OBJS}
		ar rcs ${NAME} ${BONUS_OBJS}

.c.o:
		${CC} ${FLAGS} -c $< -o ${<:.c=.o}

clean:
		${REMOVE} ${OBJS} ${BONUS_OBJS}
		echo "Objects deleted"

fclean:		clean
		${REMOVE} ${NAME}
		echo "$(NAME) deleted"

re :		fclean all

.PHONY:		all clean fclean re bonus
