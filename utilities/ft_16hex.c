/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   16hex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuyamagi < kuyamagi@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 15:02:11 by kuyamagi          #+#    #+#             */
/*   Updated: 2024/12/14 16:24:19 by kuyamagi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_16hex(unsigned long num, int uppercase)
{
    char *base;
    char *result;
    char buffer[17]; // 16桁 + '\0'
    int i = 0;

    base = (uppercase == 1) ? "0123456789ABCDEF" : "0123456789abcdef";

    if (num == 0)
    {
        result = malloc(2);
        if (!result)
            return NULL;
        result[0] = '0';
        result[1] = '\0';
        return result;
    }

    while (num > 0)
    {
        buffer[i++] = base[num % 16];
        num /= 16;
    }

    result = malloc(i + 1);
    if (!result)
        return NULL;

    result[i] = '\0';
    int j = 0;
    while (i-- > 0)
        result[j++] = buffer[i];

    return result;
}

