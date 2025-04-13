/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_x.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuyamagi < kuyamagi@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 15:17:20 by kuyamagi          #+#    #+#             */
/*   Updated: 2025/04/13 14:15:19 by kuyamagi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_x(unsigned long n, int uppercase)
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
	{
		ret = ft_printf_x(n / 16, uppercase);
		if (ret == -1)
			return (-1);
		len += ret;
	}
	ret = ft_printf_c(base[n % 16]);
	if (ret == -1)
		return (-1);
	len++;
	return (len);
}
