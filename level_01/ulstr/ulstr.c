#include <unistd.h>

int main(int argc, char **argv) {
    if (argc == 2) // Check if there is exactly one argument passed to the program
    {
        while (*argv[1]) // Iterate over each character of the argument
        {
            if (*argv[1] >= 'a' && *argv[1] <= 'z') // Check if the character is a lowercase letter
                *argv[1] -= 32; // Convert the lowercase letter to uppercase by subtracting 32 from its ASCII value
            else if (*argv[1] >= 'A' && *argv[1] <= 'Z') // Check if the character is an uppercase letter
                *argv[1] += 32; // Convert the uppercase letter to lowercase by adding 32 to its ASCII value
            write(1, &*argv[1], 1); // Write the modified character to the standard output
            argv[1]++; // Move to the next character
        }
    }
    write(1, "\n", 1); // Write a new line character to the standard output
    return 0;
}
/*
#include <unistd.h>

int main(int argc, char **argv) {
    if (argc == 2) // Verifica se há exatamente um argumento passado para o programa
    {
        while (*argv[1]) // Itera sobre cada caractere do argumento
        {
            if (*argv[1] >= 'a' && *argv[1] <= 'z') // Verifica se o caractere é uma letra minúscula
                *argv[1] -= 32; // Converte a letra minúscula para maiúscula subtraindo 32 do seu valor ASCII
            else if (*argv[1] >= 'A' && *argv[1] <= 'Z') // Verifica se o caractere é uma letra maiúscula
                *argv[1] += 32; // Converte a letra maiúscula para minúscula adicionando 32 ao seu valor ASCII
            write(1, &*argv[1], 1); // Escreve o caractere modificado na saída padrão
            argv[1]++; // Move para o próximo caractere
        }
    }
    write(1, "\n", 1); // Escreve um caractere de nova linha na saída padrão
    return 0;
}

*/