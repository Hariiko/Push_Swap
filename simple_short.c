/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_short.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laltarri <laltarri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 16:04:43 by laltarri          #+#    #+#             */
/*   Updated: 2024/01/22 16:36:28 by laltarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_distance(t_list **stack, int index)
{
	t_list	*head;
	int		distance;

	distance = 0;
	head = *stack;
	while (head)
	{
		if (head->index == index)
			break ;
		distance++;
		head = head->next;
	}
	return (distance);
}

void	simple_short(t_list **stack_a, t_list **stack_b)
{
	int	size;

	if (is_shorted(stack_a) || ft_lstsize(*stack_a) == 0
		|| ft_lstsize(*stack_a) == 1)
		return ;
	size = ft_lstsize(*stack_a);
	if (size == 2)
		sa(stack_a);
	else if (size == 3)
		short_3(stack_a);
	else if (size == 4)
		short_4(stack_a, stack_b);
	else if (size == 5)
		short_5(stack_a, stack_b);
}

void	instruction_first(t_list **list_a)
{
	ra(list_a);
	sa(list_a);
	rra(list_a);
}

void	instruction_second(t_list **list_a)
{
	sa(list_a);
	rra(list_a);
}
