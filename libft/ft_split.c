/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtavares <rtavares@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/16 10:46:24 by rtavares          #+#    #+#             */
/*   Updated: 2020/04/17 12:33:54 by rtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		cnt_string(char const *s1, char c)
{
	int	tam;
	int	k;

	tam = 0;
	k = 0;
	if (*s1 == '\0')
		return (0);
	while (*s1 != '\0')
	{
		if (*s1 == c)
			k = 0;
		else if (k == 0)
		{
			k = 1;
			tam++;
		}
		s1++;
	}
	return (tam);
}

static int		n_char(char const *s2, char c, int i)
{
	int	len;

	len = 0;
	while (s2[i] != c && s2[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}

static char		**desloc(char const **dst, int j)
{
	while (j > 0)
	{
		j--;
		free((void *)dst[j]);
	}
	free(dst);
	return (NULL);
}

static char		**exec(char const *s, char **dst, char c, int l)
{
	int	in;
	int	j;
	int	k;

	in = 0;
	j = 0;
	while (s[in] != '\0' && j < l)
	{
		k = 0;
		while (s[in] == c)
			in++;
		dst[j] = (char *)malloc(sizeof(char) * n_char(s, c, in) + 1);
		if (dst[j] == NULL)
			return (desloc((char const **)dst, j));
		while (s[in] != '\0' && s[in] != c)
			dst[j][k++] = s[in++];
		dst[j][k] = '\0';
		j++;
	}
	dst[j] = 0;
	return (dst);
}

char			**ft_split(char const *s, char c)
{
	char	**dst;
	int		len;

	if (s == NULL)
		return (NULL);
	len = cnt_string(s, c);
	dst = (char **)malloc(sizeof(char *) * (len + 1));
	if (dst == NULL)
		return (NULL);
	return (exec(s, dst, c, len));
}
