/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuyamagi < kuyamagi@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 16:08:27 by kuyamagi          #+#    #+#             */
/*   Updated: 2024/11/21 15:27:56 by kuyamagi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_numlen(long nbr)
{
	size_t	size;

	size = 0;
	if (nbr <= 0)
		size = 1;
	while (nbr != 0)
	{
		nbr /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nbr;
	size_t	size;

	nbr = (long)n;
	size = ft_numlen(nbr);
	str = (char *)malloc(size + 1);
	if (str == NULL)
		return (NULL);
	str[size] = '\0';
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		size--;
		str[size] = (nbr % 10) + '0';
		nbr /= 10;
	}
	if (size == 1 && str[1] == '\0')
		str[0] = '0';
	return (str);
}