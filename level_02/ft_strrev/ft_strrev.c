char *ft_strrev(char *str)
{
    int len = 0;
    char temp;

    if (str)
    {
        // Encontra o tamanho da string
        while (str[len])
            len++;

        int start = 0;
        int end = len - 1;

        // Inverte a string trocando os caracteres do início para o fim
        while (start < end)
        {
            temp = str[start];
            str[start] = str[end];
            str[end] = temp;

            start++;
            end--;
        }
    }

    return str;
}
