/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laltarri <laltarri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:00:25 by laltarri          #+#    #+#             */
/*   Updated: 2024/01/16 17:43:25 by laltarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_list   *get_next_min(t_list **stack)
{
    t_list  *head;
    t_list  *min;
    int     has_min;

    min = NULL;
    has_min = 0;
    head = *stack;
    if (head)
    {
        while (head)
        {
            if ((head->index == -1) && (!has_min || head->num < min->num))
            {
                min = head;
                has_min = 1;
            }
            head = head->next;
        }
    }
    return (min);
}
void	index_stack(t_list **stack)
{
	t_list	*head;
	int		index;

	index = 0;
	head = get_next_min(stack);
	while (head)
	{
		head->index = index++;
		head = get_next_min(stack);
	}
}
/*void	index_stack(t_list **stack)
{
	t_list	*min;
	int		index;
	t_list	*temp;

	index = 0;
	min = get_next_min(stack);
	temp = *stack;
	while (temp)
	{
		temp->index = index++;
		temp = temp->next;
	}
}*/
