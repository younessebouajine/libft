/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobouaji <yobouaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 16:35:53 by yobouaji          #+#    #+#             */
/*   Updated: 2025/10/18 18:09:49 by yobouaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char    *newstring;
    size_t  i;
    size_t  length;
    
    if (!s)
        return (NULL);
    length = ft_strlen(s);
    newstring = malloc(length + 1);
    if (!newstring)
        return (NULL);
    i = 0;
    while (i < length)
    {
        newstring[i] = f(i, s[i]);
        i++;
    }
    newstring[i] = '\0';
    return (newstring);
}

char ft_toupper_wrapper(unsigned int i, char c)
{
    (void)i;
    return (char)ft_toupper((int)c);
}

int main(void)
{
    char *str = ft_strmapi("hello", ft_toupper_wrapper);
    if (!str)
        return (1);
    printf("%s\n", str);
    free(str);
    return (0);
}