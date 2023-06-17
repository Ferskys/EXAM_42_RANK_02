/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferskys <ferskys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 21:41:24 by ferskys           #+#    #+#             */
/*   Updated: 2023/06/16 21:42:02 by ferskys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char    *ft_itoa(int nbr)
{
    int n = nbr;
    int len = 0;

    if (n <= 0)
        len++;
    while (n)
    {
        n /= 10;
        len++;
    }
    
    char *result = (char *)malloc((len + 1) * (sizeof(char)));
    
    if (result == NULL)
        return NULL;
    
    result[len] = '\0';

    if (nbr == 0)
    {
        result[0] = '0';
        return result;
    }
    if (nbr < 0)
    {
        result[0] = '-';
        nbr = -nbr;
    }

    while (nbr)
    {
        result[--len] = nbr % 10 + '0';
        nbr /= 10;
    }
    return result;   
}
