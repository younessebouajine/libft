/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobouaji <yobouaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 10:44:33 by yobouaji          #+#    #+#             */
/*   Updated: 2025/10/16 11:43:46 by yobouaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    char    *str;
    size_t  i;

    str = (char *)s;
    i = 0;
    while (i < n)
    {
        str[i] = 0;
        i++;
    }
    return;
}

//#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    char *str = "youne";


    ft_bzero(str, 5 );
    
      for(int i = 0; i < 5; i++)
        printf("%d ", str[i]);
    printf("\n");
}
