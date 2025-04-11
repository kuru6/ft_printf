/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_d_i.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuyamagi < kuyamagi@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 15:17:00 by kuyamagi          #+#    #+#             */
/*   Updated: 2025/04/11 21:00:50 by kuyamagi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_d_i(int n)
{
	int	word_len;
	int	modorichi;

	word_len = 0;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		modorichi = ft_putchar('-');
		if(modorichi = -1){
			return (-1)
		}
		word_len++;
		n = -n;
	}
	if (n >= 10)
		word_len += ft_printf_d_i(n / 10);
	ft_putchar((n % 10) + '0');
	word_len++;
	return (word_len);
}
