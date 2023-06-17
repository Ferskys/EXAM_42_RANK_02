#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv)
{
    if (argc == 3)
    {

        int j = 0;

        while (*argv[2])
        {
            if (*argv[2] == argv[1][j])
                j++;
            if (!argv[1][j])
            {
                    write(1, argv[1], j);
                    break; 
            }
            argv[2]++;
        }
    }
    write(1, "\n", 1);
    return (0);
}