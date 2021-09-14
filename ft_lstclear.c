#include "libft.h"
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list 	*ptr_i;
	t_list	*next;


	if (!*lst)
		return ;
	ptr_i = *lst;
	while (ptr_i)
	 {
		 next = ptr_i->next;
		 (*del)(ptr_i->content);
		 free(ptr_i);
		 ptr_i = next;
	 }
	 *lst = NULL;
}
