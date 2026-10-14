
#include "ft_printf.h"

static int ft_putaddress(uintptr_t n)
{
    char *base;
    int   count;

    base = "0123456789abcdef";
    count = 0;
    if (n >= 16)
        count += ft_putaddress(n / 16);
    count += ft_putchar(base[n % 16]);
    return (count);
}

int ft_putptr(void *ptr)
{
    int count;

    if (!ptr)
        return (ft_putstr("(nil)"));
    count = ft_putstr("0x");
    count += ft_putaddress((uintptr_t)ptr);
    return (count);
}

