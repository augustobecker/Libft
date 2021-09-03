#include "libft.h"
void ft_lstadd_back(t_list **lst, t_list *new)
{
	new->next = NULL;
	ft_lstlast(*lst)->next = new;
}
