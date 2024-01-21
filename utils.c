/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laltarri <laltarri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 12:26:41 by laltarri          #+#    #+#             */
/*   Updated: 2024/01/16 17:00:58 by laltarri         ###   ########.fr       */
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