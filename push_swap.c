/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laltarri <laltarri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 16:16:50 by laltarri          #+#    #+#             */
/*   Updated: 2023/11/25 14:08:16 by laltarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_puterror(void)
{
	write(2, "Error\n", 6);
	return (-1);
}

int check_duplicate(int *nums)
{
	int i;
	int j;
	int save_number;

	i = 0;
	
	while(!nums[i])
	{
		save_number = nums[i];
		j = 0;
		
		while(!nums[j])
		{
			if(j == i)
				j++;
			if(save_number == nums[j])
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
	int *nums = NULL;
	int i;
	
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
	
	if(check_duplicate(nums) == 0)
		return (ft_puterror());
	printf("OK\n");
	return (0);
}
