#include <unistd.h>

int is_space(char str)
{
      return (str == 9 || str == 32);
}

int main(int argc, char **argv)
{
    int i = 0;

    // Check if there is a command-line argument
    if (argc == 2)
    {
        // Ignore initial spaces and tabs
        while (is_space(*argv[1]))
            argv[1]++;

        // Print characters until a space, tab, or end of string is encountered
        while ((!is_space(*argv[1])) && *argv[1])
        {
            write(1, &*argv[1], 1);
            argv[1]++;
        }
    }

    // Print a new line
    write(1, "\n", 1);
    return (0);
}