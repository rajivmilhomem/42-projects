
char	*ft_strchr(const char *s, int c)
{
	int i;
	char *ptr;

	ptr = (char *)s;
	i = 0;
	while (ptr[i] != (char)c)
	{
        if (ptr[i] == '\0')
            return (NULL);
        i++;
    }
	return (&ptr[i]);
}