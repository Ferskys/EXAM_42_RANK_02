#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define LOWER "abcdefghijklmnoprstuwxyz"
#define UPPER "ABCDEFGHIJKLMNOPQRSTUWXYZ"

int main(int argc, char **argv)
{
    if (argc == 2)
	{
		int i;
		int index = 0;
        while (*argv[1])
        {
			i = 0;
			if (isupper(*argv[1]))
				index = strlen(UPPER) - strlen(strchr(UPPER, *argv[1]));
			else
				index = strlen(LOWER) - strlen(strchr(LOWER, *argv[1]));
			while (i <= index)
			{
				printf("%c", *argv[1]);
				i++;
			}
            argv[1]++;
        }
    }
    printf("\n");
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

