/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuyamagi < kuyamagi@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 14:58:47 by kuyamagi          #+#    #+#             */
/*   Updated: 2024/12/19 15:22:00 by kuyamagi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;
	int		i;

	count = 0;
	i = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			i++;
			if (format[i] == 'c')
				count += ft_printf_c(va_arg(args, int));
			else if (format[i] == 's')
				count += ft_printf_s(va_arg(args, char *));
			else if (format[i] == 'p')
				count += ft_printf_p(va_arg(args, void *));
			else if (format[i] == 'd' || format[i] == 'i')
				count += ft_printf_d_i(va_arg(args, int));
			else if (format[i] == 'u')
				count += ft_printf_u(va_arg(args, unsigned int));
			else if (format[i] == 'x')
				count += ft_printf_x_X(va_arg(args, unsigned int), 0);
			else if (format[i] == 'X')
				count += ft_printf_x_X(va_arg(args, unsigned int), 1);
			else if (format[i] == '%')
				count += ft_printf_c('%');
			else
				count += ft_printf_c(format[i]);
		}
		else
			count += ft_printf_c(format[i]);
		i++;
	}
	va_end(args);
	return (count);
}
