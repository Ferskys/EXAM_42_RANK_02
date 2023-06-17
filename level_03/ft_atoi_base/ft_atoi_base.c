
#include <stdlib.h>

int ft_atoi_base(const char *str, int str_base)
{
    int result = 0;
    int sign = 1;

    while (*str >= 9 && *str <= 13)
        str++;
        
    if (*str == '-')
        sign = -1;
    while (*str == '-' || *str == '+')
        str++;

    while (*str)
    {
       int value = 0;

        if (*str >= '0' && *str <= '9')
            value = *str - '0';
        else if (*str >= 'a' && *str <= 'f')
            value = *str - 'a' + 10;
        else if (*str >= 'A' && *str <= 'F')
            value = *str - 'A' + 10;
        else
            break;

        if (value >= str_base)
            break;

        result = result * str_base + value;
        str++;
    }
    return (sign * result);
}
