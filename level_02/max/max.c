int max(int* tab, unsigned int len) 
{
    int max_val = 0;
    while (len-- > 0) {
        if (*tab > max_val) {
            max_val = *tab;
        }
        tab++;
    }
    return max_val;
}
