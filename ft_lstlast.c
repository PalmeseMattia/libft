#include "libft.h"

t_list  *ft_lstlast(t_list *lst)
{
	t_list *current;

	current = lst;
    if(!current)
        return (NULL);
	while (current -> next)
	{
		current = current -> next;
	}
	return (current);
}