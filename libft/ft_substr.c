/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtavares <rtavares@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 17:32:46 by rtavares          #+#    #+#             */
/*   Updated: 2020/02/15 20:30:19 by rtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	sz;
	unsigned int	i;
	char			*pnt;

	if (!s)
		return (NULL);
	sz = ft_strlen(s) - 1;
	if (start > len)
		len = sz - start;
	if (!(pnt = malloc(sizeof(char) * len)))
		return (NULL);
	i = 0;
	while (len > i)
	{
		pnt[i] = s[start];
		start++;
		i++;
	}
	pnt[i] = '\0';
	return (pnt);
}

int main ()
{
	char s[10] = "Bolachando";

	puts(ft_substr(s, 8, 2));

	return (0);
}
