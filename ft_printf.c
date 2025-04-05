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

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int	count;
	int	i;

	count = 0;
	i = 0;

	va_start(args, format);
	while(format [i])
	{
		if(format[i] ==  '%' && format[i+1]){
			i++;
			if(format[i] == 'c')
				count += ft_printf_c(va_arg(args, int))// 1つの文字を出力！
			else if(format[i] == 's')
				count += ft_printf_s(va_arg(args, char*))// 文字列を出力（一般的なCの規約に従う)!
			else if(format[i] == 'p')
				count += ft_printf_p(va_arg(args, void*))// void * 型のポインタ引数を16進数形式で出力!
			else if(format[i] == 'd' || format[i] == 'i')
				count += ft_printf_d_i(va_arg(args, int));// 10進数の数値を出力
			else if(format[i] == 'u')
				count += ft_printf_u(va_arg(args, unsigned int));// 符号なし10進数の数値を出力
			else if(format[i] == 'x')
				count += ft_printf_x(va_arg(args, unsigned int), d_type);// 数値を16進数の小文字形式で出力
			else if(format[i] == 'X')
				count += ft_printf_X(va_arg(args, unsigned int), d_type);// 数値を16進数の大文字で出力
			else if(format[i] == '%')
				count += ft_printf_c('%')//%を出力
			else
				count += ft_printf_char(form[i]);
		}
	}
	va_end(args);
	return (出力した文字の長さを返す);
	エラーの場合は-1を返す
}
NULLの処理をわすれずに行う