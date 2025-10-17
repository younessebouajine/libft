/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobouaji <yobouaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:50:15 by yobouaji          #+#    #+#             */
/*   Updated: 2025/10/15 14:31:17 by yobouaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t    ft_strlcpy(char *dest, const char *src, size_t size)
{
    size_t    i;
    size_t    lensrc;

    lensrc = ft_strlen(src);
    if (size == 0)
        return (lensrc);
    i = 0;
    while (src[i] && i < size - 1)
    {
            dest[i] = src[i];
            i++;
    }
    dest[i] = '\0';
    return (lensrc);
}