/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuomins <fsuomins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 22:21:41 by fsuomins          #+#    #+#             */
/*   Updated: 2023/06/15 00:17:33 by fsuomins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>

char **ft_split(char *str)
{
    int n_words = 0;
    char **words = NULL;
    char *p = str;
    char *word_start = NULL;
    char *word_end = NULL;

    // Encontra o número de palavras na string
    while (*p) 
    {
        if (isspace(*p))
        {
            p++;
            continue;
        }

        word_start = p;
        
        while (*p && !isspace(*p)) 
            p++;

        n_words++;
    }

    // Aloca memória para o array de palavras
    words = malloc((n_words + 1) * sizeof(char *));
    if (words == NULL) 
        return NULL;

    // Separa as palavras e armazena no array
    p = str;
    int i = 0;

    while (*p)
    {
        if (isspace(*p))
        {
            p++;
            continue;
            }

        word_start = p;

        while (*p && !isspace(*p))
            p++;

        word_end = p;
        
        words[i] = malloc(word_end - word_start + 1);

        if (words[i] == NULL)
        {
            // Libera memória alocada anteriormente em caso de falha
            int j = 0;
            while (j < i)
            {
                free(words[j]);
                j++;
            }
            free(words);
            return NULL;
        }

        strncpy(words[i], word_start, word_end - word_start);
        words[i][word_end - word_start] = '\0';
        i++;
    }

    words[i] = NULL;
    return words;
}


// int main(int argc, char **argv)
// {
//     printf("%s", *ft_split(argv[1]));

//     return(0);
// }
/*  A função ft_split recebe uma string str como parâmetro e retorna um array de strings, onde cada string
    representa uma palavra da string original.

    A variável n_words é inicializada como zero e será usada para contar o número de palavras na string.

    A variável words é inicializada como NULL e será usada para armazenar o array de palavras.

    As variáveis p, word_start e word_end são declaradas para auxiliar na iteração e separação das palavras.

    O primeiro loop while (*p) percorre a string str até o final. O objetivo é contar o número de palavras na string.

    Dentro desse loop, há um if que verifica se o caractere atual (*p) é um espaço em branco usando a função isspace.
    Se for um espaço em branco, p é incrementado e o loop continua para a próxima iteração.

    Se o caractere atual não for um espaço em branco, o código dentro do bloco if é executado. A variável word_start
    recebe o valor de p, indicando o início de uma nova palavra.

    Em seguida, há um segundo loop while (*p && !isspace(*p)) que percorre a string a partir de p até encontrar um
    espaço em branco ou o final da string. Esse loop encontra o fim da palavra.

    A variável n_words é incrementada para contar a palavra encontrada.

    Após o primeiro loop, temos o número total de palavras n_words. Em seguida, é alocada memória para o array de
    palavras words usando malloc.

    Se a alocação de memória falhar (retornar NULL), a função retorna NULL, indicando um erro.

    O segundo loop while (*p) é usado para separar as palavras e armazená-las no array words.

    Dentro desse loop, é verificado se o caractere atual é um espaço em branco. Se for, p é incrementado e o
    loop continua para a próxima iteração.

    Se o caractere atual não for um espaço em branco, o código dentro do bloco if é executado. A variáve
    word_start recebe o valor de p, indicando o início de uma nova palavra.

    Em seguida, há um terceiro loop while (*p && !isspace(*p)) que percorre a string a partir de p até encontrar
    um espaço em branco ou o final da string. Esse loop encontra o fim da palavra.

    A variável word_end recebe o valor de p, indicando o final da palavra.

    A memória é alocada para armazenar a palavra atual em words[i]. O tamanho da palavra é calculado subtraindo
    o endereço de word_end do endereço de word_start, e adiciona-se 1 para acomodar o caractere nulo de terminação.

    Se a alocação de memória falhar (retornar NULL), a função realiza a limpeza correta das alocações anteriores
    e retorna NULL, indicando um erro.

    A função strncpy é usada para copiar a palavra do intervalo [word_start, word_end) para words[i].
    Em seguida, é adicionado o caractere nulo de terminação para garantir que a palavra seja uma string válida.

    A variável i é incrementada para avançar para a próxima posição no array words.

    Após o segundo loop, todas as palavras foram separadas e armazenadas em words.

    É atribuído NULL à última posição em words para indicar o fim do array.

    O array words é retornado como resultado da função. */