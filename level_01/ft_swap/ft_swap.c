// Function to swap the value of two integer variables
void ft_swap(int *a, int *b)
{
    int temp = *a; // Store the value of a in a temporary variable
    *a = *b; // Assign the value of b to a
    *b = temp; // Assign the value stored in the temporary variable to b
}

/*
// Função para trocar o valor de duas variáveis inteiras
void ft_swap(int *a, int *b)
{
    int temp = *a; // Armazena o valor de a em uma variável temporária
    *a = *b; // Atribui o valor de b a a
    *b = temp; // Atribui o valor armazenado na variável temporária a b
}

*/