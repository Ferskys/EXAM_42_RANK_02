#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    if (argc == 2) // Check if there is exactly one argument passed to the program
    {
        while (*argv[1]) // Iterate over each character of the argument
        {
            if ((*argv[1] >= 'a' && *argv[1] <= 'z') || (*argv[1] >= 'A' && *argv[1] <= 'Z'))
            {
                if ((*argv[1] >= 'a' && *argv[1] <= 'm') || (*argv[1] >= 'A' && *argv[1] <= 'M'))
                    *argv[1] += 13; // Rotate characters 'a' to 'm' by 13 positions forward
                else if ((*argv[1] >= 'n' && *argv[1] <= 'z') || (*argv[1] >= 'N' && *argv[1] <= 'Z'))
                    *argv[1] -= 13; // Rotate characters 'n' to 'z' by 13 positions backward
            }
            printf("%c", *argv[1]); // Print the current character
            argv[1]++; // Move to the next character
        }
    }
    printf("\n"); // Print a new line character
    return 0;
}
/*
#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    if (argc == 2) // Verifica se há exatamente um argumento passado para o programa
    {
        while (*argv[1]) // Itera sobre cada caractere do argumento
        {
            if ((*argv[1] >= 'a' && *argv[1] <= 'z') || (*argv[1] >= 'A' && *argv[1] <= 'Z'))
            {
                if ((*argv[1] >= 'a' && *argv[1] <= 'm') || (*argv[1] >= 'A' && *argv[1] <= 'M'))
                    *argv[1] += 13; // Rotaciona os caracteres 'a' a 'm' em 13 posições para a frente
                else if ((*argv[1] >= 'n' && *argv[1] <= 'z') || (*argv[1] >= 'N' && *argv[1] <= 'Z'))
                    *argv[1] -= 13; // Rotaciona os caracteres 'n' a 'z' em 13 posições para trás
            }
            printf("%c", *argv[1]); // Imprime o caractere atual
            argv[1]++; // Move para o próximo caractere
        }
    }
    printf("\n"); // Imprime um caractere de nova linha
    return 0;
}

*/