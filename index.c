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
    t_list  *temp;
    t_list  *min;
    int     has_min;

    min = NULL;
    has_min = 0;
    temp = *stack;
    if (temp)
    {
        while (temp)
        {
            if ((temp->index == -1) && (!has_min || temp->num < min->num))
            {
                min = temp;
                has_min = 1;
            }
            temp = temp->next;
        }
    }
    return (min);
}
void	index_stack(t_list **stack)
{
	t_list	*temp;
	int		index;

	index = 0;
	temp = get_next_min(stack);
	while (temp)
	{
		temp->index = index++;
		temp = get_next_min(stack);
	}
}