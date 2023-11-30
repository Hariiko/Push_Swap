/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laltarri <laltarri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 12:26:41 by laltarri          #+#    #+#             */
/*   Updated: 2023/11/25 13:25:52 by laltarri         ###   ########.fr       */
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