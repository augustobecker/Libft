#include "libft.h"
int ft_lstsize(t_list *lst)
{
	int 	length;
	t_list 	*ptr_i;

	 length = 0;
	 ptr_i = lst;
	 while (ptr_i)
	 {
		 length++;
		 ptr_i = ptr_i->next;
	 }
	 return (length);
}
