int ft_atoi(const char *str) {
    int result = 0;
    int signal = 1;

    // Skip leading whitespace
    while (*str == ' ' || (*str >= 9 && *str <= 13))
        str++;

    // Handle the sign, if present
    if (*str == '-')
        signal = -1;
    if (*str == '-' || *str == '+')
        str++;

    // Convert the string to an integer
    while (*str >= '0' && *str <= '9') {
        result = result * 10 + *str - '0';
        str++;
    }

    // Return the integer with the appropriate sign applied
    return (signal * result);
}
