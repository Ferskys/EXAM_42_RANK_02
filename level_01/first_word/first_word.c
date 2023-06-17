#include <unistd.h>

int isSpaceOrTab(char str)
{
    return (str == 9 || str == 32);
}

int main(int argc, char **argv)
{
    int i = 0;
    int lastWordIndex = -1;
    int length = 0;

    if (argc == 2)
    {
        while (isSpaceOrTab(argv[1][i]))
            i++;
        while (argv[1][i])
        {
            if (isSpaceOrTab(argv[1][i]))
            {
                lastWordIndex = i + 1;
            }
            i++;
        }
        if (lastWordIndex != -1)
        {
            i = lastWordIndex;
            while (argv[1][i])
            {
                write(1, &argv[1][i], 1);
                i++;
            }
        }
    }
    write(1, "\n", 1);
    return (0);
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