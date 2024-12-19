/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_d_i.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuyamagi < kuyamagi@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 15:17:00 by kuyamagi          #+#    #+#             */
/*   Updated: 2024/12/19 16:16:32 by kuyamagi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
int main(int nbr)
{
	int	word_len;
	int	result;

	word_len = 0;
	result = 0;
	if(nbr < '0')
	{
		write(1, '-', 1);
		word_len++;
	}
	if(nbr >= '10')
	{
		result = (nbr / 10);
		word_len++;
	}
	result = nbr;
	word_len++;

	
return (word_len);
}

size_t word_len(int)