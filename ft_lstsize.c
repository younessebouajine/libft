/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobouaji <yobouaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 09:51:15 by yobouaji          #+#    #+#             */
/*   Updated: 2025/10/20 10:14:52 by yobouaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
    unsigned int length;
    t_list *current;

    length = 0;
    current = lst;
    while (current != NULL)
    {
        length++;
        current = current->next;
    }
    return length;
}