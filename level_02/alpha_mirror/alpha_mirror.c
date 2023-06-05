#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv) {
    int i = 0;

    if (argc == 2) // Check if there is exactly one argument passed to the program
    {
        while (*argv[1]) // Iterate over each character of the argument
        {
            if (*argv[1] >= 'a' && *argv[1] <= 'z') // Check if the character is a lowercase letter
                *argv[1] = 'z' - *argv[1] + 'a'; // Convert the lowercase letter to its mirror character by subtracting its ASCII value from 'z' and adding 'a'
            else if (*argv[1] >= 'A' && *argv[1] <= 'Z') // Check if the character is an uppercase letter
                *argv[1] = 'Z' - *argv[1] + 'A'; // Convert the uppercase letter to its mirror character by subtracting its ASCII value from 'Z' and adding 'A'
            write(1, &*argv[1], 1); // Write the modified character to the standard output
            argv[1]++; // Move to the next character
        }
    }
    printf("\n"); // Print a new line
    return (0);
}
/*
#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv) {
    int i = 0;

    if (argc == 2) // Verifica se há exatamente um argumento passado para o programa
    {
        while (*argv[1]) // Itera sobre cada caractere do argumento
        {
            if (*argv[1] >= 'a' && *argv[1] <= 'z') // Verifica se o caractere é uma letra minúscula
                *argv[1] = 'z' - *argv[1] + 'a'; // Converte a letra minúscula para seu caractere espelho subtraindo seu valor ASCII de 'z' e adicionando 'a'
            else if (*argv[1] >= 'A' && *argv[1] <= 'Z') // Verifica se o caractere é uma letra maiúscula
                *argv[1] = 'Z' - *argv[1] + 'A'; // Converte a letra maiúscula para seu caractere espelho subtraindo seu valor ASCII de 'Z' e adicionando 'A'
            write(1, &*argv[1], 1); // Escreve o caractere modificado na saída padrão
            argv[1]++; // Move para o próximo caractere
        }
    }
    printf("\n"); // Imprime uma nova linha
    return (0);
}

*/