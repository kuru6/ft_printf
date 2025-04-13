/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuyamagi < kuyamagi@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 15:17:09 by kuyamagi          #+#    #+#             */
/*   Updated: 2025/04/13 14:20:25 by kuyamagi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_p(void *ptr)
{
	int	len;
	int	hex_len;

	if (ptr == NULL)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	len = write(1, "0x", 2);
	if (len != 2)
		return (-1);
	hex_len = ft_printf_x((unsigned long)ptr, 0);
	if (hex_len == -1)
		return (-1);
	return (len + hex_len);
}
