#include "libft.h"
int ft_lstsize(t_list *lst)
{
	int 	length;

	 length = 0;
	 while (lst)
	 {
		 length++;
		 lst = lst->next;
	 }
	 return (length);
}
