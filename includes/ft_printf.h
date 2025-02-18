#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_print_character(int c);
int		ft_print_str(char *str);
int		ft_print_ptr(unsigned long long n);
int		ft_printf(const char *str, ...);
size_t	ft_strlen(const char *s);
int		ft_print_decimal(int n);
int		ft_print_percent(void);
int		ft_print_formats(va_list args, const char *format);
int		ft_print_unsigneddecimal(unsigned int n);
int		ft_print_hexa(unsigned int n, const char format);

#endif
