/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferskys <ferskys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 21:46:47 by ferskys           #+#    #+#             */
/*   Updated: 2023/06/16 21:50:33 by ferskys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void        ft_list_remove_if(t_list *begin_list, voiddata_ref, int (*cmp)())
{
    t_list        *current;
    t_list        previous;

    previous = 0;
    current = begin_list;
    while (current)
    {
        if ((cmp)(current->data, data_ref) == 0)
        {
            if (previous == 0)
                begin_list = current->next;
            else
                previous->next = current->next;
            free(current);
        }
        previous = current;
        current = current->next;
    }
}
