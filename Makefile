SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
ft_isprint.c ft_strlen.c  ft_memset.c ft_bzero.c ft_memcpy.c \
ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c \
ft_strchr.c ft_strrchr.c ft_atoi.c ft_strdup.c ft_calloc.c \
ft_strnstr.c ft_itoa.c ft_substr.c ft_strjoin.c ft_strtrim.c \
ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

FLAGS = -Wall -Werror -Wextra

all:
	gcc ${FLAGS} -c ${SRCS}

	ar rcs Libft ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o \
	ft_isprint.o ft_strlen.o  ft_memset.o ft_bzero.o ft_memcpy.o \
	ft_memmove.o ft_strlcpy.o ft_strlcat.o ft_toupper.o ft_tolower.o \
	ft_strchr.o ft_strrchr.o ft_atoi.o ft_strdup.o ft_calloc.o \
	ft_strnstr.o ft_itoa.o ft_substr.o ft_strjoin.o ft_strtrim.o \
	ft_split.o ft_itoa.o ft_strmapi.o ft_striteri.o ft_putchar_fd.o \
	ft_putstr_fd.o ft_putendl_fd.o ft_putnbr_fd.o

	gcc ${FLAGS} main.c -L . libft && ./a.out

clear:
	rm -v Libft a.out *.o
	clear
check:
	ls ft_mem*
	ls ft_mem* | wc -w
	ls ft_str*
	ls ft_str* | wc -w
	ls ft_is*
	ls ft_is* | wc -w
	ls ft_*.c
	ls ft_*.c | wc -w
