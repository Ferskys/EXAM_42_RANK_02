#include <stdio.h>

int main() {
    int i = 1;

    // Loop de 1 a 100
    while(i <= 100) {
        if(i % 3 == 0 && i % 5 == 0) { // If the number is divisible by 3 and 5
            printf("fizzbuzz\n"); // Print "fizzbuzz"
        }
        else if(i % 3 == 0) { // If the number is divisible by 3
            printf("fizz\n"); // Print "fizz"
        }
        else if(i % 5 == 0) { // If the number is divisible by 5
            printf("buzz\n"); // Print "buzz"
        }
        else { // Otherwise
            printf("%d\n", i); // Print the number itself
        }
        i++; // Increment i
    }
    return 0;
}
/*
#include <stdio.h>

int main() {
    int i = 1;

    // Loop de 1 a 100
    while(i <= 100) {
        if(i%3 == 0 && i%5 == 0) { // Se o número for divisível por 3 e 5
            printf("fizzbuzz\n"); // Imprime "fizzbuzz"
        }
        else if(i%3 == 0) { // Se o número for divisível por 3
            printf("fizz\n"); // Imprime "fizz"
        }
        else if(i%5 == 0) { // Se o número for divisível por 5
            printf("buzz\n"); // Imprime "buzz"
        }
        else { // Caso contrário
            printf("%d\n", i); // Imprime o próprio número
        }
        i++; // Incrementa i
    }
    return 0;
}

*/