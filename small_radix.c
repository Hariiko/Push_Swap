/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_radix.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laltarri <laltarri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 19:55:10 by laltarri          #+#    #+#             */
/*   Updated: 2024/01/22 16:35:36 by laltarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_min(t_list **list, int val)
{
	t_list	*temp;
	int		min;

	temp = *list;
	min = temp->index;
	while (temp->next)
	{
		temp = temp->next;
		if ((temp->index < min) && temp->index != val)
			min = temp->index;
	}
	return (min);
}

void	short_3(t_list **list_a)
{
	t_list	*temp;
	int		min;
	int		next_min;

	temp = *list_a;
	min = get_min(list_a, -1);
	next_min = get_min(list_a, min);
	if (is_shorted(list_a))
		return ;
	if (temp->index == min && temp->next->index != next_min)
		instruction_first(list_a);
	else if (temp->index == next_min)
	{
		if (temp->next->index == min)
			sa(list_a);
		else
			rra(list_a);
	}
	else
	{
		if (temp->next->index == min)
			ra(list_a);
		else
			instruction_second(list_a);
	}
}

void	short_4(t_list **stack_a, t_list **stack_b)
{
	int	distance;

	if (is_shorted(stack_a))
		return ;
	distance = get_distance(stack_a, get_min(stack_a, -1));
	if (distance == 1)
		ra(stack_a);
	else if (distance == 2)
	{
		ra(stack_a);
		ra(stack_a);
	}
	else if (distance == 3)
		rra(stack_a);
	if (is_shorted(stack_a))
		return ;
	pb(stack_a, stack_b);
	short_3(stack_a);
	pa(stack_a, stack_b);
}

void	short_5(t_list **stack_a, t_list **stack_b)
{
	int	distance;

	distance = get_distance(stack_a, get_min(stack_a, -1));
	if (distance == 1)
		ra(stack_a);
	else if (distance == 2)
	{
		ra(stack_a);
		ra(stack_a);
	}
	else if (distance == 3)
	{
		rra(stack_a);
		rra(stack_a);
	}
	else if (distance == 4)
		rra(stack_a);
	if (is_shorted(stack_a))
		return ;
	pb(stack_a, stack_b);
	short_4(stack_a, stack_b);
	pa(stack_a, stack_b);
}

int	is_shorted(t_list **stack)
{
	t_list	*head;

	head = *stack;
	while (head && head->next)
	{
		if (head->num > head->next->num)
			return (0);
		head = head->next;
	}
	return (1);
}
