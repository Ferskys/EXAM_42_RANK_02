#include <stddef.h>

size_t ft_strspn(const char *s, const char *accept)
{
    size_t count = 0;

    // Iterate through the characters in 's'
    while (*s)
    {
        // Check if the current character in 's' is present in 'accept'
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

        // If the current character is not found in 'accept', stop the loop
        if (!*a)
            break;

        s++;
    }

    return count;
}
