/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferskys <ferskys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 20:21:00 by fsuomins          #+#    #+#             */
/*   Updated: 2023/06/16 18:03:22 by ferskys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int     *ft_range(int start, int end)
{
    int len = abs(end - start) + 1; 
    int *array = (int *)malloc(len * sizeof(int));
  
    if (array == NULL)
        return NULL;

    int i = 0;
    
    while (i < len)
    {
        array[i] = start;

        if (start <= end)
            start++;
        else
            start--;
        i++;
    }
    return (array);
}
