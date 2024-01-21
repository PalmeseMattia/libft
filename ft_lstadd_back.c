#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *last_node;

    if (!lst || !new)
        return ;
	last_node = ft_lstlast(*lst);
    if (!last_node)
        *lst = new;
    else 
	    last_node -> next = new;
}