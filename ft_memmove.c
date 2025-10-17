/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobouaji <yobouaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 14:40:41 by yobouaji          #+#    #+#             */
/*   Updated: 2025/10/16 18:33:43 by yobouaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char    *pdest;
    unsigned char    *psrc;
    size_t  i;

    pdest = (unsigned char *)dest;
    psrc = (unsigned char *)src;
    if (pdest == psrc || n == 0)
        return (dest);
    
    if (pdest < psrc)
        ft_memcpy(pdest, psrc, n);
    else
    {
        i = n;
        while (i > 0)
        {
            pdest[i - 1] = psrc[i - 1];
            i--;
        }
    }
    return (dest);
}

int main()
{
    char str[] = "1234567890";
    ft_memmove(str + 4, str + 3, 3);
    printf ("%s ", str);
}