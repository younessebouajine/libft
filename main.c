/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobouaji <yobouaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 17:41:46 by yobouaji          #+#    #+#             */
/*   Updated: 2025/10/17 11:10:41 by yobouaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//size_t    ft_strlen(char *str);

    
int main()
{
    char *str = "hello World";
    char *des = ft_substr(str, 6, 5);

    printf("%s  \n", des);
    return 0;
}
