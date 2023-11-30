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

int check_duplicate(int argc, char ** argv)
{
	int i;
	int j;

	i = 1;
	while(i < argc)
	{
		j = 1;		
		while(j < argc)
		{
			if(i != j && ft_atol(argv[i]) == ft_atol(argv[j]))
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

int *arrstr_to_arrint(int argc, char **argv)
{
	int *nums;
	int i;
	long long num;
	
	nums = NULL;
	i = 1;
	nums = (int *)malloc(argc * sizeof(int));
	if(!nums)
		return (NULL);
	while(i < argc)
	{
		num = ft_atol(argv[i]);
		printf("%d\n",num);
		if(num > INT_MAX || num < INT_MIN)
		{
			free(nums);
			return (NULL);
		}
		i++;
	}
	return (nums);
}


int prueba(char *str) {
    int i = 0;
    int contador = 0;
    
    while (str[i] != '\0')
	{
        if (str[0] == '-' || str[0] == '+')
		{
            contador++; 
            while (str[i + 1] != '\0' && str[i + 1] != '-' && str[i + 1] != '+')
			{
                i++;
                contador++;
            }
        }
        i++;
    }
	return (contador);
}

int main(int argc, char **argv)
{
	int i=1;
	int *nums;

	if(check_argv(argc, argv) == 0)
		return (ft_puterror());
	while(i < argc)
	{
		if(prueba(argv[i]) > 12)
			return (ft_puterror());
		i++;
	}
	if(check_duplicate(argc,argv) == 0)
		return (ft_puterror());
	nums = arrstr_to_arrint(argc,argv);
	if(nums == NULL)
		return(ft_puterror());

	printf("OK\n");
	return (0);
}