// #include <stdio.h>
// #include <stdlib.h>
// #include <stdlib.h>

// int *ft_rrange(int start, int end)
// {
// 	int *range;
// 	int i = 0;
// 	int size = end - start + 1;

// 	if (start > end)
// 		return (ft_rrange(end, start));
// 	range = (int *)malloc(sizeof(int) * size);
// 	if (range)
// 	{
// 		while (i < n)
// 		{
// 			range[i] = end;
// 			end--;
// 			i++;
// 		}
// 	}
// 	return (range);
// }

#include <stdio.h>
#include <stdlib.h>

int *ft_rrange(int start, int end)
{
    int size = (end - start) + 1;
    if (start > end)
		return (ft_rrange(end, start));

    int *array = (int *)malloc(size *sizeof(int));
 
    int i = 0;
    if (array)
    {
        while(i < size)
        {
            array[i] = end;
            end--;
            i++;
        }
    }
    return (array);
}

// void imprimirArray(int *array, int tamanho) {
//     printf("Array: [");
//     for (int i = 0; i < tamanho; i++) {
//         printf("%d", array[i]);
//         if (i != tamanho - 1) {
//             printf(", ");
//         }
//     }
//     printf("]\n");  
// }

// int main() {
//     int inicio = -4;
//     int fim = 7;

//     int *resultado = ft_rrange(inicio, fim);
//     if (resultado == NULL) {
//         printf("Erro na alocação de memória.\n");
//         return 1;
//     }

//     int tamanho = abs(fim - inicio) + 1;

//     printf("Array criado com ft_rrange(%d, %d):\n", inicio, fim);
//     imprimirArray(resultado, tamanho);

//     free(resultado);

//     return 0;
// }
