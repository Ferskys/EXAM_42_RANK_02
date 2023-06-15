#include <unistd.h>
#include <string.h>
#include <stdio.h>

int is_space(char str)
{
      return (str == 9 || str == 32);
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {

        int end = strlen(argv[1]) - 1;

        while (is_space(argv[1][end]))
            end--;

        int start = end;

        while (!is_space(argv[1][start]))
            start--;
        while (start++ < end)
            printf("%c", argv[1][start]);
    }
    printf("\n");
    return (0);
}
