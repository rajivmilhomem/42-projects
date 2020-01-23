
char	*ft_strrchr(const char *s, int c) 
{
	int i;
	int ac;
	char *ptr;

	ptr = (char *)s;
	i = 0;
	ac = -1;
	while (ptr[i] != '\0')
	{
		if (ptr[i] == (char)c)
			ac = i;
		i++;
	}
	if (ac == -1)
		return (NULL);
	return (&ptr[ac]);
}