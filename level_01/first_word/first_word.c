#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;

    // Check if there is a command-line argument
    if (argc == 2)
    {
        // Ignore initial spaces and tabs
        while (argv[1][i] == 32 || argv[1][i] == 9)
            i++;

        // Print characters until a space, tab, or end of string is encountered
        while ((argv[1][i] != 32 && argv[1][i] != 9) && argv[1][i])
        {
            write(1, &argv[1][i], 1);
            i++;
        }
    }

    // Print a new line
    write(1, "\n", 1);
}

/*
#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;

    // Verifica se há um argumento de linha de comando
    if (argc == 2)
    {
        // Ignora os espaços e tabulações iniciais
        while (argv[1][i] == 32 || argv[1][i] == 9)
            i++;

        // Imprime os caracteres até encontrar um espaço, tabulação ou fim da string
        while ((argv[1][i] != 32 && argv[1][i] != 9) && argv[1][i])
        {
            write(1, &argv[1][i], 1);
            i++;
        }
    }

    // Imprime uma nova linha
    write(1, "\n", 1);
}
*/