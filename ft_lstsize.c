#include "libft.h"

int ft_lstsize(t_list *lst)
{
	int i;
	t_list *current;

	if (lst != NULL)
	{
		i = 1;
		current = lst;
		while (current -> next)
		{	
			i++;
			current = current -> next;
		}
		return (i);
	}
	return (0);
}