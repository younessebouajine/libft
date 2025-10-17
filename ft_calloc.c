/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobouaji <yobouaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 22:07:17 by yobouaji          #+#    #+#             */
/*   Updated: 2025/10/17 12:13:28 by yobouaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *calloc(size_t nmemb, size_t size)
{
    unsigned char    *ptr;
    size_t  sizebyte;
    size_t  i;

    sizebyte = nmemb * size;
    ptr = malloc (sizebyte);
    if (!ptr)
        return (NULL);
    i = 0;
    while (i < sizebyte)
    {
        ptr[i] = 0;
        i++;
    }
    return (ptr);
}

int main()
{
    unsigned char *ptr = calloc(5, 4);
    size_t i = 0;

    while (i < 20)
    {
        printf("%d ,", ptr[i] );
        i++;
    }
}