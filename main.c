#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello, %s!\n", "world");
    ft_printf("Decimal: %d, Unsigned: %u\n", -42, 42);
    ft_printf("Hex lowercase: %x, Hex uppercase: %X\n", 255, 255);
    ft_printf("Pointer: %p\n", (void *)&main);
    ft_printf("Percent sign: %%\n");
    return 0;
}
