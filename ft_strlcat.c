/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobouaji <yobouaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 14:32:27 by yobouaji          #+#    #+#             */
/*   Updated: 2025/10/16 10:38:55 by yobouaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t  destlen;
    size_t  srclen;
    size_t  i;

    destlen = ft_strlen(dest);
    srclen = ft_strlen(src);
    
    if (size <= destlen)
        return (srclen + size);
    i = 0;
    while (src[i] && (destlen + i) < size - 1)
    {
        dest[destlen + i] = src[i];
        i++;
    }
    dest[destlen + i] = '\0';
    return (srclen + destlen); 
}