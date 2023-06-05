#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv) {
    int i = 0;

    if (argc == 2) // Check if there is exactly one argument passed to the program
    {
        while (*argv[1]) // Iterate over each character of the argument
        {
            if (*argv[1] >= 'A' && *argv[1] <= 'Z') // Check if the character is an uppercase letter
            {
                *argv[1] = *argv[1] + 32; // Convert the uppercase letter to lowercase by adding 32 to its ASCII value
                write(1, "_", 1); // Write an underscore character to the standard output
            }
            write(1, &*argv[1], 1); // Write the character to the standard output
            argv[1]++; // Move to the next character
        }
    }
    printf("\n"); // Print a new line
}
/*
#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv) {
    int i = 0;

    if (argc == 2) // Verifica se há exatamente um argumento passado para o programa
    {
        while (*argv[1]) // Itera sobre cada caractere do argumento
        {
            if (*argv[1] >= 'A' && *argv[1] <= 'Z') // Verifica se o caractere é uma letra maiúscula
            {
                *argv[1] = *argv[1] + 32; // Converte a letra maiúscula para minúscula adicionando 32 ao seu valor ASCII
                write(1, "_", 1); // Escreve um caractere de sublinhado na saída padrão
            }
            write(1, &*argv[1], 1); // Escreve o caractere na saída padrão
            argv[1]++; // Move para o próximo caractere
        }
    }
    printf("\n"); // Imprime uma nova linha
}

*/