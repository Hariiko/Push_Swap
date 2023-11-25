/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laltarri <laltarri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 16:16:50 by laltarri          #+#    #+#             */
/*   Updated: 2023/11/25 19:50:31 by laltarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_puterror(void)
{
	write(2, "Error\n", 6);
	return (-1);
}

int check_duplicate(int *nums, int size)
{
	int i;
	int j;

	i = 1;
	while(i < size)
	{
		j = i + 1;		
		while(j < size)
		{
			if(nums[i] == nums[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int check_argv(int argc, char **argv)
{
	int i;
	int j;
	int e;
	
	i = 0;
	while (++i < argc)
	{
		e = 0;
		j = ft_strlen(argv[i]);
		if(argv[i][0] == '-' || argv[i][0] == '+')
			e++;
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

int *arrstr_to_arrint(int argc, char **argv)
{
	int *nums;
	int i;

	nums = NULL;
	i = 1;
	nums = (int *)malloc(argc * sizeof(int));
	if(!nums)
		return (NULL);
	while(i < argc)
	{
		nums[i] = ft_atoi(argv[i]);
		i++;
	}
	return (nums);
}


int main(int argc, char **argv)
{
	int i;
	int *nums;

	i = 1;	
	if(check_argv(argc, argv) == 0)
		return (ft_puterror());
	nums = arrstr_to_arrint(argc,argv);
	
	if(check_duplicate(nums,argc) == 0)
		return (ft_puterror());
	printf("OK\n");
	return (0);
}
