/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobouaji <yobouaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 18:31:55 by yobouaji          #+#    #+#             */
/*   Updated: 2025/10/18 18:56:09 by yobouaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    size_t      i;
    
    i = 0;
    while (s[i])
    {
        f(i, &s[i]);
        i++;
    }
}

void upper(unsigned int i, char *c)
{
    *c = ft_toupper(*c);
}

int main()
{
    char *str = "hello";
    ft_striteri(str, upper);
    printf("%s", str);
}