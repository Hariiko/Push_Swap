#include "push_swap.h"

void	ft_lstclear(t_list **lst)
{
	t_list	*temp;
    t_list  *head;

    if (!lst || !*lst)
        return;

    head = *lst;
	while (head)
	{
        temp = head;
		head = head->next;
		free(temp);
	}
    *lst = NULL; 
}


t_list	*ft_lstnew(int num)
{
	t_list	*new;
	new = malloc(sizeof(t_list));
	if (new == NULL)
		return (NULL);
	new->num = num;
	new->next = NULL;
	return (new);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	last = *lst;
	if (*lst)
	{
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
	if (! *lst)
		*lst = new;
}