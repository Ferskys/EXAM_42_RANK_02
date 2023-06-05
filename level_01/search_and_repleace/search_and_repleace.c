#include <unistd.h>

int main(int argc, char **argv)
{
    if (argc == 4 || argv[2][1] != '\0' || argv[3][1] != '\0')
    {
        int i = 0;

        while (argv[1][i] != '\0')
        {
            if (argv[1][i] == argv[2][0]) // Checks if the current character of the first string is equal to the first character of the second string
                argv[1][i] = argv[3][0]; // Replaces the current character of the first string with the first character of the third string
            i++;
        }

        write(1, argv[1], i); // Writes the modified first string
    }
    write(1, "\n", 1); // Writes a new line character
    return (0);
}

/*
#include <unistd.h>

int main(int argc, char **argv)
{
    if (argc == 4 || argv[2][1] != '\0' || argv[3][1] != '\0')
    {
        int i = 0;

        while (argv[1][i] != '\0')
        {
            if (argv[1][i] == argv[2][0]) // Verifica se o caractere atual da primeira string é igual ao primeiro caractere da segunda string
                argv[1][i] = argv[3][0]; // Substitui o caractere atual da primeira string pelo primeiro caractere da terceira string
            i++;
        }

        write(1, argv[1], i); // Escreve a primeira string modificada
        
    }  
    write(1, "\n", 1); // Escreve um caractere de nova linha
    return 0;
}

*/