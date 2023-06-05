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

/*int ft_atoi(const char *str)
{
    int result = 0;
    int signal = 1;

    // Pula os espaços em branco iniciais
    while (*str == ' ' || (*str >= 9 && *str <= 13))
        str++;

    // Lida com o sinal, se houver
    if (*str == '-')
        signal = -1;
    if (*str == '-' || *str == '+')
        str++;

    // Converte a string em um número inteiro
    while (*str >= '0' && *str <= '9')
    {
        result = result * 10 + *str - '0';
        str++;
    }

    // Retorna o número inteiro com o sinal apropriado aplicado
    return (signal * result);
}
*/