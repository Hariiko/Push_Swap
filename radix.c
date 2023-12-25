#include "push_swap.h"

static int get_max_value(t_list *stack)
{
	t_list *head;
	int max_value;

	head = stack;
	max_value = head->num;
	while (head)
	{
		if (head->num > max_value)
			max_value = head->num;
		head = head->next;
	}
	return max_value;
}

void radix_sort(t_list *stack_a, t_list *stack_b)
{
	t_list *head_a;
	int i;
	int j;
	int size;
	int max_value;

	i = 0;
	head_a = stack_a;
	size = ft_lstsize(head_a);
	max_value = get_max_value(stack_a);
	while ((max_value >> i) != 0)
	{
		j = 0;
		while (j++ < size)
		{
			head_a = stack_a;
			if (((head_a->num >> i) & 1) == 1)
				ra(stack_a);
			else
				pb(stack_a, stack_b);
		}
		while (ft_lstsize(stack_b) != 0)
			pa(stack_a, stack_b);
		i++;
	}
}