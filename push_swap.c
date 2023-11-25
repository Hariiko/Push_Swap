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

<<<<<<< HEAD
=======
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
	{
		if (num > INT_MAX / 10 || (num == INT_MAX / 10 && (str[i] - '0') > INT_MAX % 10))
            return INT_MAX; 
		num = num * 10 + (str[i++] - '0');
	}
	return (num * sign);
}

>>>>>>> e72a612519c54b5c5d37175a3372d669fafadbce
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
	int *nums;
	int i;
	int result;

	nums = NULL;
	result = 0;
	i = 1;
	nums = (int *)malloc(argc * sizeof(int));
	if(!nums)
		return (NULL);
	while(i < argc)
	{
		result = ft_atoi(argv[i]);
        if (result == INT_MAX)
        {
            free(nums);
            return (NULL);
		}
        nums[i - 1] = result;
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
<<<<<<< HEAD
	
	if(check_duplicate(nums) == 0)
=======
	if (!nums)
		return (ft_puterror());
	/*if(check_duplicate(nums) == 0)
>>>>>>> e72a612519c54b5c5d37175a3372d669fafadbce
		return (ft_puterror());
	printf("OK\n");
	return (0);
}
