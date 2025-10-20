/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobouaji <yobouaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 14:28:41 by yobouaji          #+#    #+#             */
/*   Updated: 2025/10/17 16:22:54 by yobouaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t  all_length;
	
	if (!s1 || !s2)
		return (NULL);
	all_length = ft_strlen(s1) + ft_strlen(s2) + 1;
	ptr = malloc(all_length);
	if (!ptr)
		return (NULL);
	ptr[0] = '\0';
	ft_strlcpy(ptr, s1, all_length);
	ft_strlcat(ptr, s2, all_length);
	return (ptr);
}