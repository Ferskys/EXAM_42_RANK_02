/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferskys <ferskys@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 12:22:17 by ferskys           #+#    #+#             */
/*   Updated: 2023/06/18 17:02:21 by ferskys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>
# include <stdlib.h>
#include <ctype.h>

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        while (*argv[1])
        {
            if (isalpha(*argv[1]))
            {
                if ((*argv[1] >= 'a' && *argv[1] <= 'm') || (*argv[1] >= 'A' && *argv[1] <= 'M'))
                    *argv[1] += 13;
                else if ((*argv[1] >= 'n' && *argv[1] <= 'z') || (*argv[1] >= 'N' && *argv[1] <= 'Z'))
                    *argv[1] -= 13;
            }
            printf("%c", *argv[1]);
            argv[1]++;
        }
    }
    printf("\n");
    return 0;
}