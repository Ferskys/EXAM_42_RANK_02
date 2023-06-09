#include <stdio.h>
#include <string.h>

int is_space(char str)
{
    return (str == 9 || str == 32);
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int len = strlen(argv[1]) - 1; 

        while (len >= 0)
        {
            while (len >= 0 && is_space(argv[1][len]))
                len--;
            int end = len;


            while (len >= 0 && (!is_space(argv[1][len])))
                len--;
            int start = len + 1;
            while (start <= end)
            {
                printf("%c", argv[1][start]);
                start++;
            }
            // Se ainda há mais palavras, imprime um espaço em branco
            if (len >= 0)
                printf(" ");
        }
    }
    printf("\n"); // Exibe uma nova linha
    return 0; // Encerra o programa
}