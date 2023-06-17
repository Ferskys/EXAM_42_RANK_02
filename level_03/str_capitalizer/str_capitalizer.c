/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferskys <ferskys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 19:52:54 by ferskys           #+#    #+#             */
/*   Updated: 2023/06/16 20:22:23 by ferskys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void str_capitalizer(char *str) {
    int i = 0;

    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] - 'A' + 'a';
        if ((str[i] >= 'a' && str[i] <= 'z') && (i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t'))
            str[i] = str[i] - 'a' + 'A'; // Converte para maiúscula
        printf("%c", str[i]);
        i++;
    }
}

int main(int argc, char **argv)
{
    int i = 1;

    if (argc > 1)
    {
        while (i < argc)
        {
            str_capitalizer(argv[i]);
            printf("\n");
            i++;
        }
    }
    return 0;
}
