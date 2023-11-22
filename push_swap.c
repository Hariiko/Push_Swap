/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laltarri <laltarri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 16:16:50 by laltarri          #+#    #+#             */
/*   Updated: 2023/11/22 18:15:17 by laltarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi(const char *str)
{
	int	num;
	int	i;
	int	sign;
	int control;

	sign = 1;
	num = 0;
	i = 0;
	control = 0;	
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		control = 1;
		
		num = num * 10 + (str[i++] - '0');
	}
	if ((control == 0 || i > 0) && str[i] != '\0' && \
		   	!(str[i] >= '0' && str[i] <= '9'))
        return (-1);
	return (num * sign);
}

void	ft_puterror(void)
{
	write(2, "Error\n", 6);
}



int main(int argc, char **argv)
{
	int i;
	int num;

	i = 1;
	num = 0;
	if(argc != 1)
	{
		while (argv[i] != NULL)
        {	
			num = ft_atoi(argv[i]);
			if(num == -1)
			{
				ft_puterror();
				return (0);
			}
			printf("%d\n", num);	
			i++;
		}
	}
	else
   		ft_puterror();
	return (0);
}
