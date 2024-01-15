/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laltarri <laltarri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 12:26:41 by laltarri          #+#    #+#             */
/*   Updated: 2024/01/15 20:23:16 by laltarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_strlen(const char *s)
{
    int i;

    i = 0;
    while (s[i] != '\0')
        i++;
    return (i);
}

long long ft_atol(const char *str)
{
    long long num;
    int i;
    int sign;

    sign = 1;
    num = 0;
    i = 0;
    if (str[i] == '-')
    {
        sign = -1;
        i++;
    }
    else if (str[i] == '+')
        i++;
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
        num = num * 10 + (str[i++] - '0');
	return (num * sign);
}

void	ft_putend(char *str, int num)
{
	write(1, str, num);
	write(1,"\n",1);
}

int	ft_puterror(void)
{
	write(2, "Error\n", 6);
	return (-1);
}
t_list	*ft_lstlast(t_list *lst)
{
	t_list	*temp;

	temp = lst;
	if (temp == NULL)
		return (NULL);
	while (temp->next != NULL)
		temp = temp->next;
	return (temp);
}

static t_list	*get_next_min(t_list **stack)
{
	t_list	*head;
	t_list	*min;
	int		has_min;

	min = NULL;
	has_min = 0;
	head = *stack;
	if (head)
	{
		while (head)
		{
			if (!has_min || head->num < min->num)
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
}
