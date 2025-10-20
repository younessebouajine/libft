/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobouaji <yobouaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 21:24:22 by yobouaji          #+#    #+#             */
/*   Updated: 2025/10/19 09:28:27 by yobouaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>

void    ft_putchar_fd(char c, int fd)
{
    write (fd, &c, 1);
}

/*int main()
{
    int fd;
    fd = open("text.txt", O_WRONLY | O_CREAT | O_APPEND, 0644);
    if (fd == -1)
        return (1);
    ft_putchar_fd('A', fd);
}*/