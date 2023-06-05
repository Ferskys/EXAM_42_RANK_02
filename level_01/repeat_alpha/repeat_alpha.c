#include <stdio.h>

int main(int argc, char **argv)
{
    if (argc == 2) // Check if there are two arguments passed to the program
    {
        while (*argv[1]) // Loop while the current character of argv[1] is not the null character ('\0')
        {
            int is_repeat_alpha = 0;
            
            if (*argv[1] >= 'a' && *argv[1] <= 'z') // If the character is a lowercase letter
            {
                is_repeat_alpha = *argv[1] - 'a' + 1; // Define the number of repetitions based on the position of the letter in the alphabet
                while (is_repeat_alpha > 0) // Loop to print the character repeatedly
                {
                    printf("%c", *argv[1]); // Print the character
                    is_repeat_alpha--; // Decrement the repetition counter
                }
            }
            else if (*argv[1] >= 'A' && *argv[1] <= 'Z') // If the character is an uppercase letter
            {
                is_repeat_alpha = *argv[1] - 'A' + 1; // Define the number of repetitions based on the position of the letter in the alphabet
                while (is_repeat_alpha > 0) // Loop to print the character repeatedly
                {
                    printf("%c", *argv[1]); // Print the character
                    is_repeat_alpha--; // Decrement the repetition counter
                }
            }
            else // If the character is not a letter
                printf("%c", *argv[1]); // Print the character normally
            argv[1]++; // Move to the next character of argv[1]
        }
    }
    printf("\n"); // Print a new line
    return (0);
}

/*
#include <stdio.h>

int main(int argc, char **argv)
{
    if (argc == 2) // Verifica se há dois argumentos passados para o programa
    {
        while (*argv[1] != '\0') // Loop enquanto o caractere atual de argv[1] não for o caractere nulo ('\0')
        {
            int is_repeat_alpha = 0;
            
            if (*argv[1] >= 'a' && *argv[1] <= 'z') // Se o caractere for uma letra minúscula
            {
                is_repeat_alpha = *argv[1] - 'a' + 1; // Define o número de repetições com base na posição da letra no alfabeto
                while (is_repeat_alpha > 0) // Loop para imprimir o caractere repetidamente
                {
                    printf("%c", *argv[1]); // Imprime o caractere
                    is_repeat_alpha--; // Decrementa o contador de repetições
                }
            }
            else if (*argv[1] >= 'A' && *argv[1] <= 'Z') // Se o caractere for uma letra maiúscula
            {
                is_repeat_alpha = *argv[1] - 'A' + 1; // Define o número de repetições com base na posição da letra no alfabeto
                while (is_repeat_alpha > 0) // Loop para imprimir o caractere repetidamente
                {
                    printf("%c", *argv[1]); // Imprime o caractere
                    is_repeat_alpha--; // Decrementa o contador de repetições
                }
            }
            else // Se o caractere não for uma letra
                printf

*/

