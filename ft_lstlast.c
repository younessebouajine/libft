/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobouaji <yobouaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 10:16:12 by yobouaji          #+#    #+#             */
/*   Updated: 2025/10/20 10:23:28 by yobouaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    t_list  *current;

    if (!lst)
        return (NULL);
    current = lst;
    while (current != NULL)
    {
        if (current->next == NULL)
            return (current);
        current = current->next;
    }
    return (NULL);
}