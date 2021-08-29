#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>

int ft_isalpha(int argument);
int ft_isdigit(int argument);
int ft_isalnum(int argument);
int ft_isascii(int argument);
int ft_isprint(int argument);
size_t ft_strlen(const char *str);
void *ft_memset(void *s, int argument, size_t length);
void ft_bzero(void *s, size_t length);
void *ft_memcpy(void *dest, const void *src, size_t length);
void *ft_memmove(void *dest, const void *src, size_t length);
size_t ft_strlcpy(char *dest, const char *src, size_t size);
size_t ft_strlcat(char * dest, const char * src, size_t dest_size);
int ft_toupper(int argument);
int ft_tolower(int argument);
char *ft_strchr(const char *str, int argument);
char *ft_strrchr(const char *str, int argument);
int	ft_strncmp(char *s1, char *s2, size_t size);
void *ft_memchr(const void *str, int argument, size_t size);
int ft_memcmp(const void *s1, const void *s2, size_t n);
char *ft_strnstr(char *str, char *to_find, size_t size);
int ft_atoi(const char *str);
void *ft_calloc(size_t nbr_elements, size_t element_size);
char *ft_strdup(char *src);
char *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strtrim(char const *s1, char const *set);
char **ft_split(char const *s, char c);
char *ft_itoa(int n);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
void ft_striteri(char *s, void (*f)(unsigned int,char*));
void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char *s, int fd);
void ft_putendl_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);

#endif
