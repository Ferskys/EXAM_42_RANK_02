while (*s != '\0') 
{ // While we haven't reached the end of 's'
    p = reject; // Reset the pointer 'p' to the start of 'reject'

    while (*p != '\0' && *p != *s)
    { // While we haven't reached the end of 'reject' and the 
    // current character of 'reject' is different from the current character of 's'
        p++; // Move to the next character of 'reject'
    }

    if (*p == *s) 
    {
        /* If a character in 'reject' is found, return the current position in 's' */
        return (size_t)(s - reject);
    }

    s++; // Move to the next character of 's'
}

/* If we reached the end of 's', return the length of 's' */
return (size_t)(s - reject);


/*#include <stddef.h>

size_t ft_strcspn(const char *s, const char *reject) 
{
    const char *p; // Ponteiro para percorrer a string 'reject'

    while (*s != '\0') 
    { // Enquanto não chegarmos ao final de 's'
        p = reject; // Reinicializa o ponteiro 'p' para o início de 'reject'

        while (*p != '\0' && *p != *s)
        { // Enquanto não chegarmos ao final de 'reject' e o 
        //caractere atual de 'reject' for diferente do caractere atual de 's'
            p++; // Avança para o próximo caractere de 'reject'
        }

        if (*p == *s) 
        {
            /* Se encontrou um caractere em 'reject', retorna a posição atual em 's' */
            return (size_t)(s - reject);
        }

        s++; // Avança para o próximo caractere de 's'
    }

    /* Se chegou ao final de 's', retorna o comprimento de 's' */
    return (size_t)(s - reject);
}
*/