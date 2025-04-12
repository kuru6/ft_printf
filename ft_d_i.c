/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_d_i.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuyamagi < kuyamagi@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 15:17:00 by kuyamagi          #+#    #+#             */
/*   Updated: 2025/04/11 21:06:54 by kuyamagi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_d_i(int n)
{
	int	word_len;
	ssize_t	ret;

	word_len = 0;
	if (n == -2147483648)
	{
		if (write(1, "-2147483648", 11) == -1)
			return (-1);
		return (11);
	}
	if (n < 0)
	{
		ret = ft_putchar('-');
		if (ret == -1)
			return (-1);
		word_len++;
		n = -n;
	}
	if (n >= 10)
	{
		ret = ft_printf_d_i(n / 10);
		if (ret == -1)
			return (-1);
		word_len ++;
	}
	ret = ft_putchar((n % 10) + '0');
	if (ret == -1)
		return (-1);
	word_len++;
	return (word_len);
}

//#include "ft_printf.h"

// // ft_printf_d_i: 整数を文字列として出力し、出力した文字数を返す
// int ft_printf_d_i(int n)
// {
//     int word_len = 0;
//     ssize_t ret;

//     // 特殊ケース: 最小値
//     if (n == -2147483648)
//     {
//         if (write(1, "-2147483648", 11) == -1)
//             return (-1);  // write でエラーが発生した場合
//         return (11);  // 最小値は 11 文字で構成されている
//     }

//     // 負の数の場合
//     if (n < 0)
//     {
//         ret = ft_putchar('-');  // 負号を出力
//         if (ret == -1)
//             return (-1);  // エラー発生時は -1 を返す
//         word_len++;
//         n = -n;  // 負の数を正の数に変換
//     }

//     // 再帰的に 10 で割っていき、桁を処理
//     if (n >= 10)
//     {
//         ret = ft_printf_d_i(n / 10);  // 再帰的に桁を処理
//         if (ret == -1)
//             return (-1);  // エラー発生時は -1 を返す
//         word_len += ret;  // 再帰で得た桁数を加算
//     }

//     // 最後の桁を出力
//     ret = ft_putchar((n % 10) + '0');  // 最後の桁を出力
//     if (ret == -1)
//         return (-1);  // エラー発生時は -1 を返す
//     word_len++;  // 出力した桁数をカウント

//     return word_len;  // 出力した文字数を返す
// }