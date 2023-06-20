/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuomins <fsuomins@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 20:21:00 by fsuomins          #+#    #+#             */
/*   Updated: 2023/06/19 23:27:10 by fsuomins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int     *ft_range(int start, int end)
{
    int len = abs(end - start) + 1; 
    int *array = (int *)malloc(len * sizeof(int));
  
    int i = 0;
    
    if (array)
    {
        while (i < len)
        {
            array[i] = start;
            start++;
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

//     int *resultado = ft_range(inicio, fim);
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