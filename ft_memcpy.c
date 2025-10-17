/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobouaji <yobouaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 14:05:40 by yobouaji          #+#    #+#             */
/*   Updated: 2025/10/16 14:39:20 by yobouaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t  i;
    char    *sptr;
    char    *dptr;
    
    if (!dest && !src)
        return (NULL);
    sptr = (char *)src;
    dptr = (char *)dest;
    i = 0;
    while (i < n)
    {
        dptr[i] = sptr[i];
        i++;
    }
    return (dest);
}

int main()
{
    int src[4] = {1, 22 , 4, 5};
    int dest[5] = {4 , 5, 6, 7, 8};

    ft_memcpy(dest, src, 2 * sizeof(int));

    int i =0;
    while (i < 5)
    {
        printf("%d ", dest[i]);
        i++;
    }
}