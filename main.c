#include <stdio.h>
#include "ft_printf.h"

int main(void)
{
    int ret_ft, ret_orig;

    // %c
    ret_ft = ft_printf("ft_printf: char = [%c]\n",'h');
    ret_orig = printf("printf   : char = [%c]\n",'h');
    printf("Return: ft = %d / orig = %d\n\n", ret_ft, ret_orig);

    // %s
    ret_ft = ft_printf("ft_printf: str = [%s]\n", "Hello");
    ret_orig = printf("printf   : str = [%s]\n", "Hello");
    printf("Return: ft = %d / orig = %d\n\n", ret_ft, ret_orig);

    // %p
    int x = 42;
    ret_ft = ft_printf("ft_printf: ptr = [%p]\n", &x);
    ret_orig = printf("printf   : ptr = [%p]\n", &x);
    printf("Return: ft = %d / orig = %d\n\n", ret_ft, ret_orig);

    // %d / %i
    ret_ft = ft_printf("ft_printf: d = [%d], i = [%i]\n", -42, 42);
    ret_orig = printf("printf   : d = [%d], i = [%i]\n", -42, 42);
    printf("Return: ft = %d / orig = %d\n\n", ret_ft, ret_orig);

    // %u
    ret_ft = ft_printf("ft_printf: u = [%u]\n", 3000000000u);
    ret_orig = printf("printf   : u = [%u]\n", 3000000000u);
    printf("Return: ft = %d / orig = %d\n\n", ret_ft, ret_orig);

    // %x / %X
    ret_ft = ft_printf("ft_printf: x = [%x], X = [%X]\n", 48879, 48879);
    ret_orig = printf("printf   : x = [%x], X = [%X]\n", 48879, 48879);
    printf("Return: ft = %d / orig = %d\n\n", ret_ft, ret_orig);

    // %%
    ret_ft = ft_printf("ft_printf: %% percent sign\n");
    ret_orig = printf("printf   : %% percent sign\n");
    printf("Return: ft = %d / orig = %d\n\n", ret_ft, ret_orig);

    return 0;
}
