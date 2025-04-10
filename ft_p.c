/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuyamagi < kuyamagi@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 15:17:09 by kuyamagi          #+#    #+#             */
/*   Updated: 2024/12/07 15:50:20 by kuyamagi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int ft_printf_p(void *ptr)
{
    unsigned long addr = (unsigned long)ptr;
    char *hex = ft_16hex(addr, 0);
    if (!hex)
        return 0;

    size_t len = strlen(hex);
    char *result = malloc(len + 3); // "0x" + hex + '\0'
    if (!result)
    {
        free(hex);
        return 0;
    }

    result[0] = '0';
    result[1] = 'x';
    strcpy(result + 2, hex);
    free(hex);

    int total_len = strlen(result);
    write(1, result, total_len);
    free(result);
    return total_len;
}
