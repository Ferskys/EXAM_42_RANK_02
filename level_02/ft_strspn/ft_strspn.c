#include <stddef.h>

size_t ft_strspn(const char *s, const char *accept)
{
    size_t count = 0;
    while (*s)
    {
        const char *a = accept;
        while (*a)
        {
            if (*s == *a)
            {
                count++;
                break;
            }
            a++;
        }
        if (!*a)
            break;
        s++;
    }
    return count;
}
