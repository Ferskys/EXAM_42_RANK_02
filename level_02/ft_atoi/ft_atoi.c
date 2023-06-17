int ft_atoi(const char *str)
{
    int result = 0;
    int signal = 1;

    while (*str >= 9 && *str <= 13)
        str++;

    if (*str == '-')
        signal = -1;
    if (*str == '-' || *str == '+')
        str++;

    while (*str >= '0' && *str <= '9') 
    {
        result = result * 10 + *str - '0';
        str++;
    }
    return (signal * result);
}
