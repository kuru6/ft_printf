/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuyamagi < kuyamagi@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 15:17:09 by kuyamagi          #+#    #+#             */
/*   Updated: 2025/04/12 19:11:26 by kuyamagi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	write_ptr_str(char *hex)
{
	size_t	len;
	char	*result;
	int		total_len;

	len = ft_strlen(hex);
	result = malloc(len + 3);
	if (!result)
		return (0);
	result[0] = '0';
	result[1] = 'x';
	ft_strcpy(result + 2, hex);
	total_len = ft_strlen(result);
	write(1, result, total_len);
	free(result);
	return (total_len);
}

int	ft_printf_p(void *ptr)
{
	char			*hex;
	unsigned long	addr;

	if (ptr == NULL)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	addr = (unsigned long)ptr;
	hex = ft_16hex(addr, 0);
	if (!hex)
		return (0);
	return (write_ptr_str(hex) + (free(hex), 0));
}
