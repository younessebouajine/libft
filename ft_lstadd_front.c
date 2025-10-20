/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobouaji <yobouaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 08:01:07 by yobouaji          #+#    #+#             */
/*   Updated: 2025/10/20 09:44:45 by yobouaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
    if (!lst || !new)
        return ;
    new->next = *lst;
    *lst = new;
}

int main()
{
    t_list *list = NULL;
    t_list *node1 = ft_lstnew("hello");
    t_list *node2 = ft_lstnew("world");

    ft_lstadd_front(&list, node2);
    ft_lstadd_front(&list, node1);
}