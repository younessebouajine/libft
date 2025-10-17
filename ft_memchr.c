/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobouaji <yobouaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 19:58:36 by yobouaji          #+#    #+#             */
/*   Updated: 2025/10/16 20:26:17 by yobouaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char    *ptr;
    size_t  i;

    ptr = (unsigned char *)s;
    i = 0;
    while (i < n)
    {
        if (ptr[i] == (unsigned char)c)
            return (void *)(ptr + i);
        i++;
    }
    return (NULL);
}

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    char str[] = "Hello";

    int  *res = ft_memchr(arr, 30, 5 * sizeof(int));
    char *re  = ft_memchr(str, 'l', 5);

    if (res)
        printf("Found number: %d\n", *res);
    else
        printf("Number not found\n");

    if (re)
        printf("Found in string: %s\n", re);
    else
        printf("Character not found\n");

    return 0;
}