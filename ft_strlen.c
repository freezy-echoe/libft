unsigned int ft_strlen(char *str)
{
    unsigned int c;

    c = 0;
    while(str[c])
    {
        c++;
    }
    return c;
}