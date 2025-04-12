/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_d_i.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuyamagi < kuyamagi@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 15:17:00 by kuyamagi          #+#    #+#             */
/*   Updated: 2025/04/12 18:28:30 by kuyamagi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putnbr_recursive(int n)
{
	int	ret;
	int	len;

	len = 0;
	if (n >= 10)
	{
		ret = ft_putnbr_recursive(n / 10);
		if (ret == -1)
			return (-1);
		len += ret;
	}
	ret = ft_putchar((n % 10) + '0');
	if (ret == -1)
		return (-1);
	return (len + 1);
}

int	ft_printf_d_i(int n)
{
	int	ret;
	int	len;

	if (n == -2147483648)
		return (write(1, "-2147483648", 11));
	len = 0;
	if (n < 0)
	{
		ret = ft_putchar('-');
		if (ret == -1)
			return (-1);
		len++;
		n = -n;
	}
	ret = ft_putnbr_recursive(n);
	if (ret == -1)
		return (-1);
	return (len + ret);
}
