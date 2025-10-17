/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobouaji <yobouaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 11:56:27 by yobouaji          #+#    #+#             */
/*   Updated: 2025/10/16 12:41:51 by yobouaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *s, int c, size_t n)
{
    char    *ptr;
    size_t  i;

    ptr = (char *)s;
    i = 0;
    while (i < n)
    {
        ptr[i] = (unsigned char)c;
        i++;
    }
    return s;
}

int main()
{
    //int arr[5] = {1, 2, 3, 4, 5};
    
    char arr[5] = "youne";
    
    ft_memset(arr, '55', 5);
    int i = 0;
    while (i < 5)
    {
        printf("%i\n", arr[i]);
        i++;
    }
}