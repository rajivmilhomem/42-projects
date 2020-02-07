
#include "libft.h"

char *ft_strdup(const char *s)
{
	char	*pt;

	pt = malloc((ft_strlen(s) + 1) * sizeof(char));
	ft_strlcpy(pt, s, (ft_strlen(s) + 1));
	return (pt);
}