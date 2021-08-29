#include "libft.h"
void *ft_calloc(size_t nbr_elements, size_t element_size)
{
	void *ptr;

	ptr = malloc(nbr_elements * element_size);
	ft_bzero(ptr, element_size);
	return (ptr);
}
