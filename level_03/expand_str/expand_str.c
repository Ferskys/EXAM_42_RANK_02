#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int is_space(char str)
{
    if (str == 9 || str == 32)
        return 1;
    else
        return 0;
}

int main(int argc, char const **argv)
{
	int i = 0;
	int flg = 0;

	if (argc == 2)
	{
		while (is_space(argv[1][i]))
			i++;
		while (argv[1][i])
		{
			if (is_space(argv[1][i]))
				flg = 1;
			else
			{
				if (flg)
					write(1, "   ", 3);
				flg = 0;
				write(1, &argv[1][i], 1);
			}
            ++i;
		}
	}
	write(1, "\n", 1);
	return (0);
}

// int main(int argc, char **argv)
// {
//     // Verificar se o programa foi chamado com o número correto de argumentos
//     if (argc == 2)
//     {
//         int i = 0;
//         int end = strlen(argv[1]);

//         while (is_space(argv[1][i]) == 1)
//             i++;
//         // Ignorar espaços em branco e tabulações no início da string

//         while (is_space(argv[1][end - 1]) == 1)
//             end--;
//         // Ignorar espaços em branco e tabulações no final da string

//         // Verificar se a string não está vazia
//         if (i < end)
//         {
//             while (i < end)
//             {
//                 // Inserir três espaços se um espaço em branco ou tabulação for encontrado
//                 // após um caractere não vazio
//                 if (!is_space(argv[1][i]))
//                     printf("%c", argv[1][i]);
//                 else if (is_space(argv[1][i]) &&  !is_space(argv[1][i - 1]))
//                     printf("   ");
//                 // Imprimir o caractere se não for espaço em branco ou tabulação
//                 i++;
//             }
//         }
//     }
//     printf("\n");
//     return 0;
// }



/*
#include <stdio.h>

int main(int argc, char **argv)
{
    // Verifica se o programa foi chamado com o número correto de argumentos
    if (argc == 2)
    {
        int i = 0;

        // Ignora espaços em branco e tabulações no início da string
        while (argv[1][i] == 9 || argv[1][i] == 32)
            i++;

        // Verifica se a string não chegou ao fim
        if (argv[1][i] != '\0')
        {
            while (argv[1][i] != '\0')
            {
                // Insere três espaços se encontrar um espaço em branco ou tabulação
                // após um caractere não vazio
                if ((argv[1][i] == 9 || argv[1][i] == 32) && (argv[1][i - 1] != 9 && argv[1][i - 1] != 32))
                    printf("   ");
                // Imprime o caractere se não for um espaço em branco ou tabulação
                else if (argv[1][i] != 9 && argv[1][i] != 32)
                    printf("%c", argv[1][i]);
                ++i;
            }
        }
    }
    printf("\n");
    return 0;
}
*/