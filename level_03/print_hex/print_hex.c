/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferskys <ferskys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 18:29:31 by ferskys           #+#    #+#             */
/*   Updated: 2023/06/16 18:33:37 by ferskys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void print_hex(int num)
{
    if (num > 0)
    {
        print_hex(num / 16);

        int rest = num % 16;

        if (rest < 10)
            printf("%c", rest + '0');
        else
            printf("%c", rest - 10 + 'a');
    }
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        print_hex(atoi(argv[1]));
    }
    printf("\n");
    return 0;
}
