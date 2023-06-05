#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    if (argc == 4) // Check if there are exactly three arguments passed to the program
    {
        if (argv[2][0] == '+') // Check if the second argument is '+'
            printf("%d", (atoi(argv[1]) + atoi(argv[3]))); // Perform addition and print the result
        else if (argv[2][0] == '-') // Check if the second argument is '-'
            printf("%d", (atoi(argv[1]) - atoi(argv[3]))); // Perform subtraction and print the result
        else if (argv[2][0] == '*') // Check if the second argument is '*'
            printf("%d", (atoi(argv[1]) * atoi(argv[3]))); // Perform multiplication and print the result
        else if (argv[2][0] == '%') // Check if the second argument is '%'
            printf("%d", (atoi(argv[1]) % atoi(argv[3]))); // Perform modulo division and print the result
        else if (argv[2][0] == '/') // Check if the second argument is '/'
            printf("%d", (atoi(argv[1]) / atoi(argv[3]))); // Perform integer division and print the result
    }
    printf("\n"); // Print a new line
}
/*
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    if (argc == 4) // Verifica se há exatamente três argumentos passados para o programa
    {
        if (argv[2][0] == '+') // Verifica se o segundo argumento é '+'
            printf("%d", (atoi(argv[1]) + atoi(argv[3]))); // Realiza a adição e imprime o resultado
        else if (argv[2][0] == '-') // Verifica se o segundo argumento é '-'
            printf("%d", (atoi(argv[1]) - atoi(argv[3]))); // Realiza a subtração e imprime o resultado
        else if (argv[2][0] == '*') // Verifica se o segundo argumento é '*'
            printf("%d", (atoi(argv[1]) * atoi(argv[3]))); // Realiza a multiplicação e imprime o resultado
        else if (argv[2][0] == '%') // Verifica se o segundo argumento é '%'
            printf("%d", (atoi(argv[1]) % atoi(argv[3]))); // Realiza a divisão modular e imprime o resultado
        else if (argv[2][0] == '/') // Verifica se o segundo argumento é '/'
            printf("%d", (atoi(argv[1]) / atoi(argv[3]))); // Realiza a divisão inteira e imprime o resultado
    }
    printf("\n"); // Imprime uma nova linha
}

*/