/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_x.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuyamagi < kuyamagi@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 15:17:20 by kuyamagi          #+#    #+#             */
/*   Updated: 2024/12/07 15:50:02 by kuyamagi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include <unistd.h>

// 一文字出力（再利用）
void ft_putchar_x(char c)
{
    write(1, &c, 1);
}

// 16進数（小文字 or 大文字）出力関数
int ft_printf_x_X(unsigned int n, int uppercase)
{
    int len = 0;
    char *base;

    if (uppercase)
        base = "0123456789ABCDEF"; // 大文字
    else
        base = "0123456789abcdef"; // 小文字

        if (n >= 16)
        len += ft_printf_x_X(n / 16, uppercase); // ← ここを修正！

    ft_putchar_x(base[n % 16]);
    len++;

    return len;
}
