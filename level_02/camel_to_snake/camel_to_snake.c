#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv) 
{
    if (argc == 2)
    {
        while (*argv[1])
        {
            if (*argv[1] >= 'A' && *argv[1] <= 'Z')
            {
                *argv[1] = *argv[1] + 32;
                write(1, "_", 1);
            }
            write(1, argv[1], 1);
            argv[1]++;
        }
    }
    printf("\n");
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