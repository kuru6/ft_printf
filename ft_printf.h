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
int		ft_printf_x_X(unsigned int n, int uppercase);
char	*ft_pointer(void *ptr);
char	*ft_16hex(unsigned long n, int uppercase);
char	*ft_itoa(int n);
size_t	ft_numlen(long nbr);
void	ft_putchar(char c);
size_t  ft_strlen(const char *s);
char    *ft_strcpy(char *dest, const char *src);


#endif
