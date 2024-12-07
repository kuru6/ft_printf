/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuyamagi < kuyamagi@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 14:58:47 by kuyamagi          #+#    #+#             */
/*   Updated: 2024/12/07 15:57:03 by kuyamagi         ###   ########.fr       */
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
				ft_c.c//1つの文字を出力
			else if(format[i] == 's')
				ft_s.c//文字列を出力（一般的なCの規約に従う）。
			else if(format[i] == 'p')
				ft_p.c//void * 型のポインタ引数を16進数形式で出力
			else if(format[i] == 'd')
				ft_d.c//10進数の数値を出力
			else if(format[i] == 'i')
				ft_i.c//10進数の整数を出力
			else if(format[i] == 'u')
				ft_u.c//符号なし10進数の数値を出力
			else if(format[i] == 'x')
				ft_x.c//数値を16進数の小文字形式で出力
			else if(format[i] == 'X')
				ft_X.c//数値を16進数の大文字で出力
			else if(format[i] == '%')
				ft_percent.c()//%を返す
		}
	}
	va_end(args);
	return (出力した文字の長さを返す);
}
NULLの処理をわすれずに行う