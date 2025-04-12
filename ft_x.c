/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_x.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuyamagi < kuyamagi@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 15:17:20 by kuyamagi          #+#    #+#             */
/*   Updated: 2025/04/11 15:14:42 by kuyamagi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_x(unsigned int n, int uppercase)
{
	int		len;
	char	*base;
	int		ret;

	len = 0;
	if (uppercase)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (n >= 16)
		len += ft_printf_x(n / 16, uppercase);
	ft_putchar(base[n % 16]);
	if (ret == -1)
		return (-1);
	len++;
	return (len);
}
