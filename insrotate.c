/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laltarri <laltarri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:03:04 by laltarri          #+#    #+#             */
/*   Updated: 2024/01/16 16:31:18 by laltarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.c"

int	rotate(t_list **list)
{
	t_list	*temp ;
	t_list	*tail;

	if (ft_lstsize(*list) < 2)
		return (-1);
	temp = *list;
	tail = ft_lstlast(temp);
	*list = temp->next;
	temp->next = NULL;
	tail->next = temp;
	return (0);
}

int	ra(t_list **list_a)
{
	if (rotate(list_a) == -1)
		return (-1);
	ft_putend("ra", 2);
	return (0);
}

int	rb(t_list **list_b)
{
	if (rotate(list_b) == -1)
		return (-1);
	ft_putend("rb", 2);
	return (0);
}

int	rr(t_list **list_a, t_list **list_b)
{
	if ((ft_lstsize(*list_a) < 2) || (ft_lstsize(*list_b) < 2))
		return (-1);
	rotate(list_a);
	rotate(list_b);
	ft_putend("rr", 2);
	return (0);
}