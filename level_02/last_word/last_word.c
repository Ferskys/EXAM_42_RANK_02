#include <unistd.h>

void last_word(char *str)
{
    int i = 0;

    while (str[i])
    {
        if (str[i] == ' ' || str[i] == '\t')  // Verifica se o caractere atual é um espaço ou uma tabulação
        {
            int j = i + 1;

            while (str[j] != ' ' && str[j] != '\t' && str[j] != '\0')  // Verifica se o caractere atual não é um espaço, uma tabulação ou um caractere nulo
            {
                write(1, &str[j], 1);  // Escreve o caractere no console usando a função write
                j++;
            }
        }
        i++;
    }
}

int main(int argc, char **argv)
{
    if (argc == 2)
        last_word(argv[1]);  // Chama a função last_word passando a string de entrada como argumento
    write(1, "\n", 1);  // Escreve uma nova linha no console
    return 0;
}