#include <stdio.h> 
int is_power_of_2(unsigned int n) {
    // Verifica se o número é diferente de zero e se o resultado da operação
    // bitwise AND entre n e (n - 1) é igual a zero.
    // Se ambos os critérios forem atendidos, n é uma potência de 2.
    return (n != 0) && ((n & (n - 1)) == 0);
}