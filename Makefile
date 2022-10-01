# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acesar-l <acesar-l@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/07 17:02:42 by acesar-l          #+#    #+#              #
#    Updated: 2022/10/01 15:35:06 by acesar-l         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

GREEN		= \033[0;32m
GREY		= \033[0;90m
RED			= \033[0;31m
RESET		= \033[0m

CC 			= clang

FLAGS 		= -Wall -Werror -Wextra

REMOVE 		= rm -f

INCLUDE		= -I ./standard_libft/

SRCS 		= standard_libft/ft_isalpha.c 	\
			standard_libft/ft_isdigit.c 	\
			standard_libft/ft_isalnum.c 	\
			standard_libft/ft_isascii.c 	\
			standard_libft/ft_isprint.c 	\
			standard_libft/ft_strlen.c 		\
			standard_libft/ft_memset.c 		\
			standard_libft/ft_bzero.c 		\
			standard_libft/ft_memcpy.c 		\
			standard_libft/ft_memmove.c 	\
			standard_libft/ft_strlcpy.c 	\
			standard_libft/ft_strlcat.c 	\
			standard_libft/ft_toupper.c 	\
			standard_libft/ft_tolower.c 	\
			standard_libft/ft_strchr.c 		\
			standard_libft/ft_strrchr.c 	\
			standard_libft/ft_strncmp.c		\
			standard_libft/ft_memchr.c		\
			standard_libft/ft_memcmp.c		\
			standard_libft/ft_strnstr.c		\
			standard_libft/ft_atoi.c 		\
			standard_libft/ft_strdup.c 		\
			standard_libft/ft_calloc.c 		\
			standard_libft/ft_strnstr.c 	\
			standard_libft/ft_itoa.c 		\
			standard_libft/ft_substr.c	 	\
			standard_libft/ft_split.c 		\
			standard_libft/ft_strjoin.c 	\
			standard_libft/ft_strtrim.c		\
			standard_libft/ft_itoa.c 		\
			standard_libft/ft_strmapi.c 	\
			standard_libft/ft_striteri.c 	\
			standard_libft/ft_putstr_fd.c 	\
			standard_libft/ft_putchar_fd.c 	\
			standard_libft/ft_putstr_fd.c 	\
			standard_libft/ft_putendl_fd.c 	\
			standard_libft/ft_putnbr_fd.c	\
			utils/ft_count_occurrences.c	\
			utils/ft_free_ptr.c				\
			utils/ft_free_str_array.c		\
			get_next_line/get_next_line.c	\
			ft_printf/ft_printf.c			\
			ft_printf/ft_argument_c.c		\
			ft_printf/ft_arguments_d_i.c	\
			ft_printf/ft_argument_p.c		\
			ft_printf/ft_argument_percent.c	\
			ft_printf/ft_argument_s.c		\
			ft_printf/ft_argument_u.c		\
			ft_printf/ft_arguments_x.c		\
			ft_printf/ft_free_ptr.c			\
			ft_printf/ft_hex_length.c		\
			ft_printf/ft_decimal_length.c	\
			ft_printf/ft_print_reversed_str.c	\
			ft_printf/ft_decimal_converter_to_hex.c

BONUS_SRCS  	= standard_libft/ft_lstnew.c			\
			standard_libft/ft_lstadd_front.c			\
			standard_libft/ft_lstsize.c					\
			standard_libft/ft_lstlast.c					\
			standard_libft/ft_lstadd_back.c				\
			standard_libft/ft_lstdelone.c				\
			standard_libft/ft_lstclear.c				\
			standard_libft/ft_lstiter.c					\
			standard_libft/ft_lstmap.c

OBJS 		= $(SRCS:.c=.o)

BONUS_OBJS 	= $(BONUS_SRCS:.c=.o)

all:		$(NAME)

$(NAME): 	$(OBJS)
			@ar -rcs $(NAME) $(OBJS) $(INCLUDE)
			@echo "$(GREY)Libft: $(GREEN)$(NAME) was created$(RESET)"

bonus:		$(NAME) $(BONUS_OBJS)
			@ar -rcs $(NAME) $(BONUS_OBJS) $(INCLUDE)
			@echo "$(GREY)Libft: $(GREEN)$(NAME) was created with Bonus$(RESET)"

.c.o:
			@$(CC) $(FLAGS) -c $< -o $(<:.c=.o)

clean:
			@$(REMOVE) $(OBJS) $(BONUS_OBJS)
			@echo "$(GREY)Libft: object files were deleted$(RESET)"

fclean:		clean
			@$(REMOVE) $(NAME)
			@echo "$(GREY)Libft: $(NAME) was deleted$(RESET)"

re:			fclean $(NAME)

rebonus:	fclean bonus

.PHONY:		all clean fclean re bonus rebonus
