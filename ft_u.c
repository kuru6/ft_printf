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

int	ft_printf_u(unsigned int n)
{
	int	word_len;

	word_len = 0;
	if (n >= 10)
		word_len += ft_printf_u(n / 10);
	ft_putchar((n % 10) + '0');
	word_len++;
	return (word_len);
}

