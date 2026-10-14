
#include "ft_printf.h"

int ft_putchar(char c)
{
    return ((int)write(1, &c, 1));
}

