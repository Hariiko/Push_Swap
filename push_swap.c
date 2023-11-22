/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laltarri <laltarri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 16:16:50 by laltarri          #+#    #+#             */
/*   Updated: 2023/11/22 20:57:03 by laltarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi(const char *str)
{
	int	num;
	int	i;
	int	sign;

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

int	ft_puterror(void)
{
	write(2, "Error\n", 6);
	return (-1);
}

int ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int check_argv(int argc, char **argv)
{
	int i;
	int j;
	int e = 0;
	
	i = 0;
	while (++i < argc)
	{
		j = ft_strlen(argv[i]);
		while(e < j)
		{
			if (!(argv[i][e] >= '0' && argv[i][e] <= '9'))
			return(0);
			e++;
		}
	}
	return (1);
}


// el numero 0 significa false

int main(int argc, char **argv)
{
	int i;
	//int *nums;

	i = 1;	
	if(check_argv(argc, argv) == 0)
		return (ft_puterror());
	/*nums = arrstr_to_arrint(argv);
	if(check_duplicate(nums) == 0)
		return (ft_puterror());
	*/printf("OK\n");
	return (0);
}
