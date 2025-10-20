/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobouaji <yobouaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 08:38:14 by yobouaji          #+#    #+#             */
/*   Updated: 2025/10/19 10:24:04 by yobouaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>

void    ft_putnbr_fd(int n, int fd)
{
    if (n < 0)
    {
        ft_putchar_fd('-', fd);
        if (n == -2147483648)
        {
            ft_putstr_fd("2147483648", fd);
            return;
        }
        n *= -1;
    }
    if (n > 9)
        ft_putnbr_fd(n / 10, fd);
    ft_putchar_fd(n % 10 + '0', fd);
}

int main()
{
    int fd;
    fd = open ("log.txt", O_WRONLY | O_CREAT, 0644);
    ft_putnbr_fd(42, fd);
    close (fd);
    return 0;
}