/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuyamagi < kuyamagi@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 15:10:41 by kuyamagi          #+#    #+#             */
/*   Updated: 2025/04/13 14:57:44 by kuyamagi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>
# include <stdint.h>
# include <string.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);
int		ft_printf_c(char c);
int		ft_printf_s(const char *str);
int		ft_printf_d_i(int n);
int		ft_printf_u(unsigned int n);
int		ft_printf_p(void *ptr);
int		ft_printf_x(unsigned long n, int uppercase);

#endif
