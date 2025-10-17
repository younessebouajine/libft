/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobouaji <yobouaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 09:23:51 by yobouaji          #+#    #+#             */
/*   Updated: 2025/10/17 09:14:07 by yobouaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t  i;
    size_t  j;
    
    if (*little == '\0')
        return ((char *)big);
    i = 0;
    while (big[i] && i < len)
    {
        j = 0;
        while (big[i + j] == little[j] && (j + i) < len)
        {
            if (little[j + 1] == '\0')
                return ((char *)&big[i]);
            j++;
        }
        i++;
    }
    return (NULL);
}