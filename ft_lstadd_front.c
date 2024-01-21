#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
    if (!lst || !new)
		return ;
	t_list *first = *lst;
	if (first) {
		new -> next = first;
		*lst = new;
	}
    else
        *lst = new;
}