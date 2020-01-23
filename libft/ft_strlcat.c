
char	*ft_strlcat(char *dst, char *src, size_t size)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dst[i] != '\0')
		i++;
	while (src[j] != '\0' && size--)
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	dst[i] = '\0';
	return(dst);
}