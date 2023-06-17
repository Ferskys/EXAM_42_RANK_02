char *ft_strrev(char *str)
{
    int len = 0;
    char temp;

    if (str)
    {
        while (str[len])
            len++;

        int start = 0;
        int end = len - 1;

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
