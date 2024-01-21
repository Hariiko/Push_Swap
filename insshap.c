
#include "push_swap.h"

int	swap(t_list **list)
{
	t_list	*temp;
	t_list	*next;
	int		tmp_val;
	int		tmp_index;

	if (ft_lstsize(*list) < 2)
		return (-1);
	temp = *list;
	next = temp->next;
	if (!temp && !next)
		return(ft_puterror());
	tmp_val = temp->num;
	tmp_index = temp->index;
	temp->num = next->num;
	temp->index = next->index;
	next->num = tmp_val;
	next->index = tmp_index;
	return (0);
}

int	sa(t_list **list_a)
{
	if (swap(list_a) == -1)
		return (-1);
	ft_putend("sa", 2);
	return (0);
}

int	sb(t_list **list_b)
{
	if (swap(list_b) == -1)
		return (-1);
	ft_putend("sb", 2);
	return (0);
}

int	ss(t_list **list_a, t_list **list_b)
{	
	if ((ft_lstsize(*list_a) < 2) || (ft_lstsize(*list_b) < 2))
		return (-1);
	swap(list_a);
	swap(list_b);
	ft_putend("ss", 2);
	return (0);
}