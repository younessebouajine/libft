/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobouaji <yobouaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 10:30:36 by yobouaji          #+#    #+#             */
/*   Updated: 2025/10/17 11:07:52 by yobouaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t     ft_strlen(const char *str)
{
    size_t    i;

    if (str == NULL)
        return 0;
    i = 0;
    while (str[i])
        i++;
    return (i);
}