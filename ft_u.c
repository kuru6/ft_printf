/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_u.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuyamagi < kuyamagi@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 15:17:17 by kuyamagi          #+#    #+#             */
/*   Updated: 2024/12/07 15:50:15 by kuyamagi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_putchar_u(char c)
{
    write(1, &c, 1);
}

int ft_printf_u(unsigned int n)
{
    int len = 0;

    if (n >= 10)
        len += ft_printf_u(n / 10);

    ft_putchar_u((n % 10) + '0');
    len++;

    return len;
}
