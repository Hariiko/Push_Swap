/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laltarri <laltarri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 16:16:50 by laltarri          #+#    #+#             */
/*   Updated: 2023/11/21 17:14:10 by laltarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int i;

	i = 1;
	if(argc != 1)
	{
		while (argv[i] != NULL)
        {
			printf("%s\n",argv[i]);
 			/* 	int num = argv[i][j] - '0';
			 	int mod = num % 10;
			*/
			i++;
		}
	}
	else
   		write(1,"ERROR",5);
//	write(1,"\n",1);
	return (0);
}
