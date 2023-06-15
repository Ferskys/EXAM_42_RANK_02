#include <stdio.h>
#include <stdlib.h>

// Function to check if a number is prime
int is_prime(int number)
{
    if (number < 2)
        return 0;
    
    int i = 2;
    while (i * i <= number)
    {
        if (number % i == 0)
            return 0;
        i++;
    }
    
    return 1;
}

int main(int argc, char **argv)
{
    // Check if the program was called with the correct number of arguments
    if (argc != 2)
    {
        printf("0\n");
        return 0;
    }
    
    // Convert the input argument to an integer
    int num = atoi(argv[1]);

    // Check if the input number is valid (positive)
    if (num <= 0)
    {
        printf("0\n");
        return 0;
    }

    int prime_sum = 0;
    int i = 2;

    // Iterate from 2 to the input number and sum the prime numbers
    while (i <= num)
    {
        if (is_prime(i))
            prime_sum += i;
        i++;
    }

    printf("%d\n", prime_sum);
    return 0;
}