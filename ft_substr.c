/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobouaji <yobouaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 09:15:23 by yobouaji          #+#    #+#             */
/*   Updated: 2025/10/18 09:28:21 by yobouaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t  ft_min(size_t a, size_t b)
{
    if (a < b)
        return (a);
    return (b);
}

static char    *ft_strempty()
{
    unsigned char *dest;

    dest = malloc (1);
    if (!dest)
        return (NULL);
    dest[0] = '\0';
        return dest;
}

char    *ft_substr(char const *s, unsigned int start,size_t len)
{
    unsigned char *dest;
    size_t  i;
    size_t  size;
    size_t  cpylen;

    if (s == NULL)
        return (NULL);
    size = ft_strlen(s);
    if (start >= size)
        return ft_strempty();
    cpylen = ft_min(len, (size - start));
    dest = (char *)malloc(cpylen + 1);
    if (!dest)
        return (NULL);
    i = 0;
    while (i < cpylen)
    {
        dest[i] = s[start + i];
        i++;
    }
    dest[cpylen] = '\0';
    return (dest);
}

int main(void)
{
    char *str = "hello World";
    char *des ;

    des = ft_substr(str, 6, 5);
    printf("%s  \n", des);
    free(des);
    return 0;
}