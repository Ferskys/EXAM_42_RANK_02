/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuomins <fsuomins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 18:29:31 by ferskys           #+#    #+#             */
/*   Updated: 2023/06/20 17:30:16 by fsuomins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#define HEX "0123456789abcdef"

void print_hex(int num)
{
    if (num > 0)
    {
        print_hex(num / 16);
        int rest = num % 16;
		printf("%c", HEX[rest]);
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
