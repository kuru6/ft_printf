/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuyamagi < kuyamagi@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 14:58:47 by kuyamagi          #+#    #+#             */
/*   Updated: 2024/12/14 16:56:52 by kuyamagi         ###   ########.fr       */
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
				ft_char//1つの文字を出力
			else if(format[i] == 's')
				ft_char//文字列を出力（一般的なCの規約に従う）。
			else if(format[i] == 'p')
				ft_p//void * 型のポインタ引数を16進数形式で出力
			else if(format[i] == 'd')
				ft_d(va_arg(*ptr, int))//10進数の数値を出力
			else if(format[i] == 'i')
				ft_i(va_arg(*ptr, int))//10進数の整数を出力
			else if(format[i] == 'u')
				ft_u(va_arg(*ptr, unsigned int));//符号なし10進数の数値を出力
			else if(format[i] == 'x')
				ft_x(va_arg(*ptr, unsigned int));//数値を16進数の小文字形式で出力
			else if(format[i] == 'X')
				ft_X(va_arg(*ptr, unsigned int));//数値を16進数の大文字で出力
			else if(format[i] == '%')
				ft_char('%')//%を返す
			else
		len += ft_printf_char(form[i]);
		}
	}
	va_end(args);
	return (出力した文字の長さを返す);
}
NULLの処理をわすれずに行う