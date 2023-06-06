#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int is_space(char str)
{
    if (str == 9 || str == 32)
        return 1;
    else
        return 0;
}

int main(int argc, char const **argv)
{
	int i = 0;
	int flg = 0;

	if (argc == 2)
	{
		while (is_space(*argv[1]))
			argv[1]++;
		while (*argv[1])
		{
			if (is_space(*argv[1]))
				flg = 1;
			else
			{
				if (flg)
					write(1, " (oi)", 5);
				flg = 0;
				write(1, &*argv[1], 1);
			}
            argv[1]++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
