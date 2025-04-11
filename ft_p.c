/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuyamagi < kuyamagi@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 15:17:09 by kuyamagi          #+#    #+#             */
/*   Updated: 2024/12/07 15:50:20 by kuyamagi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_p(void *ptr)
{
	unsigned long	addr;
	char			*hex;
	size_t			len;
	char			*result;
	int				total_len;

	addr = (unsigned long)ptr;
	hex = ft_16hex(addr, 0);
	if (!hex)
		return (0);
	len = ft_strlen(hex);
	result = malloc(len + 3);
	if (!result)
	{
		free(hex);
		return (0);
	}
	result[0] = '0';
	result[1] = 'x';
	ft_strcpy(result + 2, hex);
	free(hex);
	total_len = ft_strlen(result);
	write(1, result, total_len);
	free(result);
	return (total_len);
}

