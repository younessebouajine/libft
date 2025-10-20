/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobouaji <yobouaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 15:03:56 by yobouaji          #+#    #+#             */
/*   Updated: 2025/10/18 16:31:02 by yobouaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int  ft_len(int n)
{
    int counter;
    
    counter = 0;
    if(n <= 0)
        counter = 1;
    while (n != 0)
    {
        counter++;
        n /= 10;
    }
    return (counter);
}

static char *ft_iszero()
{
    char    *str;
    str = malloc (2);
    if (!str)
        return (NULL);
    str[0] = '0';
    str[1] = '\0';
    return str;
}

static char *ft_convert_number(long num, int len, int is_negative)
{
    char *str;
    int i;

    str = malloc(len + 1);
    if (!str)
        return (NULL);
    
    str[len] = '\0';
    i = len - 1;
    
    while (num != 0)
    {
        str[i] = (num % 10) + '0';
        num /= 10;
        i--;
    }
    
    if (is_negative)
        str[0] = '-';
    
    return (str);
}

char *ft_itoa(int n)
{
    long num;
    int is_negative;
    int len;

    if (n == 0)
        return (ft_iszero());
    
    is_negative = 0;
    num = n;
    
    if (num < 0)
    {
        is_negative = 1;
        num = -num;
    }
    
    len = ft_len(n);
    return (ft_convert_number(num, len, is_negative));
}
