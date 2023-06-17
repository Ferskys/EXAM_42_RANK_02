#include <stdio.h>

int iter(char* str, char c)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] == c)
            return 1;
        i++;
    }
    return 0;
}

int main(int argc, char* argv[])
{
    if (argc == 3)
    {
        while (*argv[1] != '\0')
        {
            if (iter(argv[2], *argv[1]) && !iter(argv[1] + 1, *argv[1]))
                printf("%c", *argv[1]);
            argv[1]++;
        }
    }
    printf("\n");
    return 0;
}