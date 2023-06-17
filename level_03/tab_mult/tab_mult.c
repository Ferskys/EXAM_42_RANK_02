/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferskys <ferskys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 20:23:29 by ferskys           #+#    #+#             */
/*   Updated: 2023/06/16 20:27:46 by ferskys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>
#include <stdio.h>

void tab_mult(int num, int count)
{
    if (count > 9)
        return;
    
    printf("%d x %d = %d\n", count, num, count * num);
    
    tab_mult(num, count + 1);
}

int main(int argc, char **argv)
{
    if (argc == 2) 
    {     
        int num = atoi(argv[1]);
        
        tab_mult(num, 1);
    }
    printf("\n");
    return 0;
}