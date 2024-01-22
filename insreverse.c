/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insreverse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laltarri <laltarri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:37:13 by laltarri          #+#    #+#             */
/*   Updated: 2024/01/22 19:13:21 by laltarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	reverse_rotate(t_list **list)
{
	t_list	*temp;
	t_list	*tail;

	if (ft_lstsize(*list) < 2)
		return (-1);
	temp = *list;
	tail = ft_lstlast(temp);
	while (temp)
	{
		if (temp->next->next == NULL)
		{
			temp->next = NULL;
			break ;
		}
		temp = temp->next;
	}
	tail->next = *list;
	*list = tail;
	return (0);
}

int	rra(t_list **list_a)
{
	if (reverse_rotate(list_a) == -1)
		return (-1);
	ft_putend("rra", 2);
	return (0);
}

int	rrb(t_list **list_b)
{
	if (reverse_rotate(list_b) == -1)
		return (-1);
	ft_putend("rrb", 2);
	return (0);
}

int	rrr(t_list **list_a, t_list **list_b)
{
	if ((ft_lstsize(*list_a) < 2) || (ft_lstsize(*list_b) < 2))
		return (-1);
	reverse_rotate(list_a);
	reverse_rotate(list_b);
	ft_putend("rrr", 2);
	return (0);
}
