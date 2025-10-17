/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobouaji <yobouaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:54:12 by yobouaji          #+#    #+#             */
/*   Updated: 2025/10/16 10:33:20 by yobouaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (*s)
	{
		if (*s == (char)c)
			return (char *)s;
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}
