/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuyamagi < kuyamagi@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 15:34:39 by kuyamagi          #+#    #+#             */
/*   Updated: 2024/12/19 15:39:40 by kuyamagi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_s(const char *str)
{
	int	word_len;

	if (!str)
		str = "(null)";
	word_len = 0;
	while (*str)
	{
		write(1, str, 1);
		word_len++;
		str++;
	}
	return (word_len);
}
