/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laltarri <laltarri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:39:34 by laltarri          #+#    #+#             */
/*   Updated: 2024/01/22 15:39:51 by laltarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	get_max_bits(t_list **list)
{
	t_list	*temp;
	int		max;
	int		max_bits;

	temp = *list;
	max = temp->index;
	max_bits = 0;
	while (temp)
	{
		if (temp->index > max)
			max = temp->index;
		temp = temp->next;
	}
	while ((max >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

void	radix_sort(t_list **list_a, t_list **list_b)
{
	t_list	*temp_a;
	int		i;
	int		j;
	int		size;
	int		max_bits;

	i = 0;
	temp_a = *list_a;
	size = ft_lstsize(temp_a);
	max_bits = get_max_bits(list_a);
	while (i < max_bits)
	{
		j = 0;
		while (j++ < size)
		{
			temp_a = *list_a;
			if (((temp_a->index >> i) & 1) == 1)
				ra(list_a);
			else
				pb(list_a, list_b);
		}
		while (ft_lstsize(*list_b) != 0)
			pa(list_a, list_b);
		i++;
	}
}
