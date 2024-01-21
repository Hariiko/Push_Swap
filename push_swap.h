/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laltarri <laltarri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:07:24 by laltarri          #+#    #+#             */
/*   Updated: 2024/01/19 20:23:20 by laltarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	int				num;
	int				index;
	struct s_list	*next;
}				t_list;
long long	ft_atol(const char *str);
t_list		*ft_lstnew(int num);
t_list		*ft_lstlast(t_list *lst);
void		ft_lstclear(t_list **lst);
void		ft_lstadd_back(t_list **lst, t_list *new);
int			ft_lstsize(t_list *lst);
void		radix_sort(t_list **stack_a, t_list **stack_b);
int			ft_puterror(void);
int			ft_strlen(const char *s);
void		ft_putend(char *str, int num);
int			pa(t_list **a, t_list **b);
int			pb(t_list **b, t_list **a);
int			ra(t_list **a);
int			swap(t_list **stack);
int			sa(t_list **stack_a);
int			sb(t_list **stack_b);
int			ss(t_list **stack_a, t_list **stack_b);
int			push(t_list **stack_to, t_list **stack_from);
int			rotate(t_list **stack);
int			rb(t_list **stack_b);
int			rr(t_list **stack_a, t_list **stack_b);
int			reverseRotate(t_list **stack);
int			rra(t_list **stack_a);
int			rrb(t_list **stack_b);
int			rrr(t_list **stack_a, t_list **stack_b);
void		index_stack(t_list **stack);
void		simple_short(t_list **stack_a, t_list **stack_b);
int			is_shorted(t_list **stack);
int			get_distance(t_list **stack, int index);
#endif
