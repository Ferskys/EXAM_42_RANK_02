#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int i = 0;

        while (argv[1][i] != '\0')
        {
            if (argv[1][i] == 95)
            {
                i++;
                argv[1][i] = argv[1][i] - 32;
            }
            write(1, &argv[1][i], 1);
            i++;
        }
    }
    printf("\n");
    return (0);
}