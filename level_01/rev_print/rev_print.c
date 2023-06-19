#include <unistd.h>

int main(int argc, char *argv[]) 
{
    if (argc == 2) // Check if there are two arguments passed to the program
    {
        int i = 0;

        while (argv[1][i])
            i++;
        
        while (i >= 0)
            write(1, &argv[1][--i], 1); // Call the function to print the provided string
    }
    write(1, "\n", 1); // Write a new line character
    return (0);
}

/*
#include <unistd.h>

void print_string(const char* str)
{
    int i = 0;

    while (str[i])
        i += 1;
    
    while (i)
        write(1, &str[--i], 1);
}

int main(int argc, char *argv[]) 
{
    if (argc == 2) // Verifica se há dois argumentos passados para o programa
    {
        print_string(argv[1]); // Chama a função para imprimir a string fornecida
    }
    write(1, "\n", 1); // Escreve um caractere de nova linha
    return (0);
}

*/