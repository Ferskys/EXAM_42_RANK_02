/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferskys <ferskys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 18:23:45 by ferskys           #+#    #+#             */
/*   Updated: 2023/06/16 18:24:49 by ferskys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    if (argc != 3) 
    {
        printf("\n");
        return 0;
    }

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    while (b != 0) 
    {
        int temp = a % b;
        a = b;
        b = temp;
    }
    
    printf("%d\n", a);
    return 0;
}