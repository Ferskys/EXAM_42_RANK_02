#include <stdio.h>

int iter(char* str, char c)
{
    int i = 0;

    // Loop enquanto o caractere atual não for o caractere nulo '\0'
    while (str[i] != '\0')
    {
        // Verifica se o caractere atual é igual ao caractere c
        if (str[i] == c)
            return 1; // Retorna 1 se o caractere for encontrado
        i++; // Avança para o próximo caractere na string
    }
    return 0; // Retorna 0 se o caractere não for encontrado
}

int main(int argc, char* argv[])
{
    // Verifica se o número de argumentos é diferente de 3
    if (argc == 3)
    {
        // Loop enquanto o caractere atual da primeira string não for o caractere nulo '\0'
        while (*argv[1] != '\0')
        {
            // Verifica se o caractere atual está presente na segunda string (argv[2])
            // e se não se repete na primeira string (argv[1] + 1)
            if (iter(argv[2], *argv[1]) && !iter(argv[1] + 1, *argv[1]))
                printf("%c", *argv[1]); // Imprime o caractere atual
            argv[1]++; // Avança para o próximo caractere na primeira string
        }
    }
    printf("\n"); // Imprime uma nova linha
    return 0; // Retorna 0 para encerrar o programa
}