/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuomins <fsuomins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 19:30:47 by fsuomins          #+#    #+#             */
/*   Updated: 2023/06/14 21:54:15 by fsuomins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* A função strcspn() calcula o comprimento de
        o segmento inicial de s que consiste inteiramente
        de bytes não rejeitados. 
  A função strcspn() retorna o número de
        bytes no segmento inicial de s que não são
        na string rejeitar. */
#include <stdio.h>

size_t ft_strcspn(const char *s, const char *reject)
{
    int i = 0;
    while (s[i])
    {
        int j = 0;
        while (reject[j])
        {
            if (s[i] == reject[j])
                return (i);
            j++;
        }
        i++;
    }
    return (i);
}
