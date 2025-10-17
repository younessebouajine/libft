/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobouaji <yobouaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 21:10:21 by yobouaji          #+#    #+#             */
/*   Updated: 2025/10/16 22:06:35 by yobouaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t  i;
    unsigned char   *sptr;
    unsigned char   *dptr;

    sptr = (unsigned char *) s1;
    dptr = (unsigned char *) s2;
    i = 0;
    while (i < n)
    {
        if (sptr[i] != dptr[i])
            return (sptr[i] - dptr[i]);
        i++;
    }
    return (0);
}

int main()
{
    char *src = "younesse";
    char *dest = "YO";
    printf("%d\n", ft_memcmp(src, dest, 2 ));
}