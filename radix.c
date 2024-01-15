#include "push_swap.h"

static int	get_max_value(t_list **stack)
{
t_list	*head;
	int		max;
	int		max_bits;

	head = *stack;
	max = head->index;
	max_bits = 0;
	while (head)
	{
		printf("%d ",head->index);
		if (head->index > max)
			max = head->index;
		head = head->next;
	}
	printf("\n");
	while ((max >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

void radix_sort(t_list **stack_a, t_list **stack_b)
{
	t_list *head_a;
	int i;
	int j;
	int size;
	int max_value;

	i = 0;
	head_a = *stack_a;
	size = ft_lstsize(head_a);
	max_value = get_max_value(stack_a);
	printf("%d tamano",size);
	printf("\n");
	printf("%d bite",max_value);
	printf("\n");
	
	while (i < max_value)
	{
		j = 0;
		while (j++ < size)
		{
			head_a = *stack_a;
			if (((head_a->index >> i) & 1) == 1)
				ra(stack_a);
            else
               	pb(stack_a, stack_b);
        }
		while (ft_lstsize(*stack_b) != 0)
            pa(stack_a, stack_b);
        i++;
	}
}
