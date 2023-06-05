// Function to copy a string
char *ft_strcpy(char *s1, char *s2)
{
    int i = 0;

    // Loop to copy each character from s2 to s1
    while (s2[i] != '\0')
    {
        s1[i] = s2[i]; // Copy the current character from s2 to s1
        i++;
    }
    s1[i] = '\0'; // Add the null character at the end of s1 to indicate the end of the string
    return (s1); // Return the pointer to s1
}

/*
// Função para copiar uma string
char *ft_strcpy(char *s1, char *s2)
{
    int i = 0;

    // Loop para copiar cada caractere de s2 para s1
    while (s2[i] != '\0')
    {
        s1[i] = s2[i]; // Copia o caractere atual de s2 para s1
        i++;
    }
    s1[i] = '\0'; // Adiciona o caractere nulo no final de s1 para indicar o término da string
    return (s1); // Retorna o ponteiro para s1
}

*/