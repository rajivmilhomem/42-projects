
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*pnt;
	size_t	i;

	pnt = malloc(nmemb * size);
	i = 0;
	if (nmemb == 0 || size == 0)
		return (NULL);
	while(i < nmemb)
	{
		((char *)pnt)[i] = 0;
		i++;
	}
	return (pnt);
}
