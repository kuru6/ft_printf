/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_d_i.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuyamagi < kuyamagi@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 15:17:00 by kuyamagi          #+#    #+#             */
/*   Updated: 2024/12/19 16:16:32 by kuyamagi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

void ft_putchar_d_i(char c)
{
    write(1, &c, 1);
}

int ft_printf_d_i(int n)
{
    int len = 0;

    if (n == -2147483648)
    {
        write(1, "-2147483648", 11);
        return 11;
    }

    if (n < 0)
    {
        ft_putchar_d_i('-');
        len++;
        n = -n;
    }

    if (n >= 10)
    {
        len += ft_printf_d_i(n / 10);
    }

    ft_printf_d_i((n % 10) + '0');
    len++;

    return len;
}
