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

char *ft_pointer(void *ptr)
{
    unsigned long addr = (unsigned long)ptr;
    char *hex = ft_16hex(addr);
    if (!hex)
        return NULL;

    // "0x" + hex 文字列を連結
    size_t len = strlen(hex);
    char *result = malloc(len + 3); // 2文字("0x") + hex + '\0'
    if (!result)
    {
        free(hex);
        return NULL;
    }

    result[0] = '0';
    result[1] = 'x';
    strcpy(result + 2, hex);

    free(hex);
    return result;
}

