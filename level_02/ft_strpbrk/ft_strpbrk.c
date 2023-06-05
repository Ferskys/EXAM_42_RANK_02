#include <stddef.h>

char *ft_strpbrk(const char *s1, const char *s2)
{
    const char *p1; // Pointer to iterate through string s1
    const char *p2; // Pointer to iterate through string s2

    while (*s1)
    {
        p1 = s1; // Initialize pointer p1 with the current value of s1
        p2 = s2; // Initialize pointer p2 with the current value of s2

        while (*p2)
        {
            if (*p1 == *p2)
                return (char *)p1; // Return a pointer to the corresponding character found in s1

            p2++; // Move to the next character in s2
        }

        s1++; // Move to the next character in s1
    }

    return NULL; // Return NULL if no corresponding character is found
}

/*
#include <stddef.h>

char *ft_strpbrk(const char *s1, const char *s2)
{
	const char *p1; // Ponteiro para percorrer a string s1
	const char *p2; // Ponteiro para percorrer a string s2

	while (*s1)
	{
		p1 = s1; // Inicializa o ponteiro p1 com o valor atual de s1
		p2 = s2; // Inicializa o ponteiro p2 com o valor atual de s2

		while (*p2)
		{
			if (*p1 == *p2)
				return (char *)p1; // Retorna um ponteiro para o caractere correspondente encontrado em s1

			p2++; // Avança para o próximo caractere em s2
		}
		
		s1++; // Avança para o próximo caractere em s1
	}

	return NULL; // Retorna NULL se nenhum caractere correspondente for encontrado
}

*/



