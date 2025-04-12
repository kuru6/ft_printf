/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_u.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuyamagi < kuyamagi@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 15:17:17 by kuyamagi          #+#    #+#             */
/*   Updated: 2025/04/12 18:33:00 by kuyamagi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_u(unsigned int n)
{
	int	word_len;
	int	ret;

	word_len = 0;
	if (n >= 10)
	{
		ret = ft_printf_u(n / 10);
		if (ret == -1)
			return (-1);
		word_len += ret;
	}
	ret = ft_putchar((n % 10) + '0');
	if (ret == -1)
		return (-1);
	word_len++;
	return (word_len);
}
