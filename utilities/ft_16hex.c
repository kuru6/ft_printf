/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_16hex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuyamagi < kuyamagi@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 15:02:11 by kuyamagi          #+#    #+#             */
/*   Updated: 2025/04/11 15:17:03 by kuyamagi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static char	*get_base(int uppercase)
{
	if (uppercase == 1)
		return ("0123456789ABCDEF");
	return ("0123456789abcdef");
}

static char	*handle_zero_case(void)
{
	char	*result;

	result = malloc(2);
	if (!result)
		return (NULL);
	result[0] = '0';
	result[1] = '\0';
	return (result);
}

char	*ft_16hex(unsigned long num, int uppercase)
{
	char	*base;
	char	*result;
	char	buffer[17];
	int		i;
	int		j;

	if (num == 0)
		return (handle_zero_case());
	base = get_base(uppercase);
	i = 0;
	while (num > 0)
	{
		buffer[i++] = base[num % 16];
		num /= 16;
	}
	result = malloc(i + 1);
	if (!result)
		return (NULL);
	result[i] = '\0';
	j = 0;
	while (i-- > 0)
		result[j++] = buffer[i];
	return (result);
}
