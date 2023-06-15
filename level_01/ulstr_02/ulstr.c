/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuomins <fsuomins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 18:58:18 by fsuomins          #+#    #+#             */
/*   Updated: 2023/06/14 19:30:16 by fsuomins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        while(*argv[1])
        {
            if (*argv[1] >= 'a' && *argv[1] <= 'z')
                *argv[1] -= 32;
            else if (*argv[1] >= 'A' && *argv[1] <= 'Z')
                 *argv[1] += 32;
            write (1, &*argv[1], 1);
            argv[1]++;
        }
    }
    write (1, "\n", 1);
    return (0);
}