int ft_strcmp(char *s1, char *s2)
{
    int i = 0;

    while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
    {
        i++;
    }
    
    // Return the difference of the characters at the current position
    // This will be 0 if the strings are equal, negative if s1 is less than s2, and positive if s1 is greater than s2
    return (s1[i] - s2[i]);
}
