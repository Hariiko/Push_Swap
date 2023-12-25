/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laltarri <laltarri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:07:24 by laltarri          #+#    #+#             */
/*   Updated: 2023/11/25 12:29:49 by laltarri         ###   ########.fr       */
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
	struct s_list	*next;
}				t_list;
//list
void	ft_lstclear(t_list **lst);
t_list	*ft_lstnew(int num);
void	ft_lstadd_back(t_list **lst, t_list *new);
int	ft_lstsize(t_list *lst);
void radix_sort(t_list *stack_a, t_list *stack_b);
//
int	ft_puterror(void);
int ft_strlen(const char *s);
long long ft_atol(const char *str);
int	ft_putend(char *str, int num);
t_list	*ft_lstlast(t_list *lst);
#endif
