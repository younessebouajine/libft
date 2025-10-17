/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobouaji <yobouaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 14:58:17 by yobouaji          #+#    #+#             */
/*   Updated: 2025/10/15 17:19:00 by yobouaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *nptr)
{
    int mark;
    int value;
    int i;

    i = 0;
    mark = 1;
    value = 0;
    while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
        i++;
    if (nptr[i] == '+' || nptr[i] == '-')
    {
        if (nptr[i] == '-')
            mark *= -1;
        i++;
    }
    while (nptr[i] >= '0' && nptr[i] <= '9')
    {
	if(value > (2147483647 - (nptr[i] - '0')) / 10)
	{
		if (mark == 1)
			return (-1);
		else
			return (0);
	}
	value = value * 10 + (nptr[i] - '0');
	i++;
    }
    return (value * mark);
}

#include <stdio.h>


int main()
{
    char *nptr = " -++2445";
    
    
    
    printf("%d \n",ft_atoi(nptr));    
    printf("%d \n",atoi(nptr));    
}
