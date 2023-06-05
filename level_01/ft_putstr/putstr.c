#include <unistd.h>

// Function to print a string
void ft_putstr(char *str)
{
    int i = 0;

    // Loop to iterate through the string until the null character
    while (str[i])
        write(1, &str[i++], 1); // Write each character to the standard output using the write() function
}
/*
#include <unistd.h>

// Função para imprimir uma string
void ft_putstr(char *str)
{
    int i = 0;

    // Loop para percorrer a string até o caractere nulo
    while (str[i])
        write(1, &str[i++], 1); // Escreve cada caractere na saída padrão usando a função write()
}

*/