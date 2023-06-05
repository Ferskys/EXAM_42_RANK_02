// Function to get the length of a string
int ft_strlen(char *str)
{
    int i = 0;

    // Loop to count the number of characters until the null character is encountered
    while (str[i])
        i++; // Increment the counter i
    return (i); // Return the length of the string
}
/*
// Função para obter o tamanho de uma string
int ft_strlen(char *str)
{
    int i = 0;

    // Loop para contar o número de caracteres até encontrar o caractere nulo
    while (str[i])
        i++; // Incrementa o contador i
    return (i); // Retorna o tamanho da string
}

*/