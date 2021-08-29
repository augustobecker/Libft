#include "libft.h"
void ft_putstr_fd(char *s, int fd)
{
	while (*s)
		write(fd, s++, sizeof(char));
}
