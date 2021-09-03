#include "libft.h"
t_list *ft_lstlast(t_list *lst)
{
        t_list 	*ptr_i;

	 ptr_i = lst;
	 while (ptr_i->next)
		 ptr_i = ptr_i->next;
	 return (ptr_i);
}
