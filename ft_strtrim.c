/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobouaji <yobouaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 18:11:56 by yobouaji          #+#    #+#             */
/*   Updated: 2025/10/17 21:14:07 by yobouaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int  ft_isset(char c, const char *set)
{
    while (*set)
    {
        if (*set == c)
            return (1);
        set++;
    }
    return (0);
    //return (strchr(set, c) != NULL);
}

char    *ft_strtrim(char const *s1, char const *set)
{
    size_t  start;
    size_t  end;
    size_t  len;
    size_t  i;
    char    *trim;
    
    if (!s1 || !set)
        return(NULL);
    start = 0;
    len = ft_strlen(s1);
    end = len;
    while (start < len && ft_isset(s1[start], set))
        start++;
    while (end > start && ft_isset(s1[end - 1], set))
        end--;
    trim = malloc (end - start + 1);
    if (!trim)
        return (NULL);
    ft_memcpy(trim, s1 + start, end - start);
    trim [end - start] = '\0';
    return trim;
}
/*
int main()
{
    char *str = "/!abaca!/";
    char *set = "/!";

    char *result = ft_strtrim(str, set);
    if (result)
    {
        printf("Trimmed string: '%s'\n", result);
        free(result);
    }
    else
        printf("ft_strtrim returned NULL\n");
    
    return 0;
}*/

