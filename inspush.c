/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inspush.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laltarri <laltarri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:27:48 by laltarri          #+#    #+#             */
/*   Updated: 2024/01/22 15:40:32 by laltarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	push(t_list **list_dst, t_list **list_ori)
{
	t_list	*tmp;
	t_list	*temp_dst;
	t_list	*temp_ori;

	if (ft_lstsize(*list_ori) == 0)
		return (-1);
	temp_dst = *list_dst;
	temp_ori = *list_ori;
	tmp = temp_ori;
	temp_ori = temp_ori->next;
	*list_ori = temp_ori;
	if (!temp_dst)
	{
		temp_dst = tmp;
		temp_dst->next = NULL;
		*list_dst = temp_dst;
	}
	else
	{
		tmp->next = temp_dst;
		*list_dst = tmp;
	}
	return (0);
}

int	pa(t_list **stack_a, t_list **stack_b)
{
	if (push(stack_a, stack_b) == -1)
		return (-1);
	ft_putend("pa", 2);
	return (0);
}

int	pb(t_list **stack_a, t_list **stack_b)
{
	if (push(stack_b, stack_a) == -1)
		return (-1);
	ft_putend("pb", 2);
	return (0);
}
