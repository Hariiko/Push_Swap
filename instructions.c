#include "push_swap.h"

int swap(t_list *stack)
{
    t_list  *temp;
    t_list  *temp2;
    int     tmp_value;
    int     tmp_index;

    if(ft_lstsize(stack) <= 1)
        return (-1);
        
    temp = stack;
    temp2 = stack->next;

    if (!temp || !temp2)
        return (ft_puterror());

    tmp_value = next->value;
	tmp_index = next->index;
	temp->value = temp2->value;
	temp->index = next2->index;
	temp2->value = tmp_value;
	temp2->index = tmp_index;

    return (0);
}

int sa (t_list *a )
{
    if(swap(a) == -1)
        return (-1);
    ft_putend("sa",2);
    return (0);
}

int sb (t_list *b )
{
    if(swap(b) == -1)
        return (-1);
    ft_putend("sb",2);
    return (0);
}

int ss(t_list *a, t_list *b)
{
    if(ft_lstsize(a) <=1 || ft_lstsize(b) <= 1)
        return (ft_puterror()); 
    swap(a);
    swap(b);
    ft_putend("ss",2);
    return (0);
}

int push (t_list *to, t_list *from)
{
    t_list	*tmp;
	t_list	*head_to;
	t_list	*head_from;

	if (ft_lstsize(from) == 0)
    		return (-1);
	head_to = to;
	head_from = from;
	tmp = head_from;
	head_from = head_from->next;
	from = head_from;
	if (!head_to)
	{
		head_to = tmp;
		head_to->next = NULL;
		to = head_to;
	}
	else
	{
 		tmp->next = head_to;
		to = tmp;
	}
	return (0);
}

int pa(t_list *a, t_list *b)
{
    if(push(a,b) == -1)
        return(ft_puterror());
    ft_putend("pa",2);
    return (0);
}

int pb(t_list *b, t_list *a)
{
    if(push(b,a) == -1)
        return(ft_puterror());
    ft_putend("pb",2);
    return (0);
}

int rotate(t_list *a)
{
    t_list	*head;
	t_list	*tail;

	if (ft_lstsize(a) < 2)
		return (ft_puterror());
	head = a;
	tail = ft_lstlast(head);
	a = head->next;
	head->next = NULL;
	tail->next = head;
    return (0);
}

int ra(t_list *a)
{
    if(rotate(a) == -1)
        return(ft_puterror());
    ft_putend("ra",2);
    return (0);
}

int rb(t_list *b)
{
    if(rotate(b) == -1)
        return(ft_puterror());
    ft_putend("rb",2);
    return (0);
}

int rr(t_list *a, t_list *b)
{
    if(rotate(a) == -1 || rotate(b) == -1)
        return(ft_puterror());
    ft_putend("rr",2);
    return (0);
}

int rotatereverse(t_list *a)
{
    t_list	*head;
	t_list	*tail;

	if (ft_lstsize(a) < 2)
		return (-1);
	head = a;
	tail = ft_lstlast(head);
	while (head)
	{
		if (head->next->next == NULL)
		{
			 head->next = NULL;
			 break ;
		}
		head = head->next;
	}
	tail->next = a;
	a = tail;
	return (0);
}

int rra(t_list *a)
{
    if(rotatereverse(a) == -1)
        return(ft_puterror());
    ft_putend("rra",3);
    return (0);
}

int rrb(t_list *b)
{
    if(rotatereverse(b) == -1)
        return(ft_puterror());
    ft_putend("rrb",3);
    return (0);
}

int rrr(t_list *a,t_list *b)
{
    if(rotatereverse(a) == -1 || rotatereverse(b))
        return(ft_puterror());
    ft_putend("rrr",3);
    return (0);
}