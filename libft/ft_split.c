/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtavares <rtavares@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/16 10:46:24 by rtavares          #+#    #+#             */
/*   Updated: 2020/03/16 14:58:41 by rtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Conta a quantidade de linhas para alocação //

static int		count_c(char const *s, char c)
{
	unsigned int	len;
	unsigned int	i;

	i = 0;
	len = 0;
	if (s[0] != c)
		len++;
	if ( s[ft_strlen(s) - 1] == c)
		len--;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && s[i] == c)
		{
			i++;
			len++;
			if (s[i] == c)
				len--;
		}
		i++;
	}
	return (len);
}

// Conta a quantidade de colunas para alocação //

static unsigned int count_str(char const *s, char c, unsigned int i)
{
	unsigned int	len;

	len = 0;
	
	if (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		while (s[i] != c && s[i] != '\0')
		{
			len++;
			i++;
		}
		return (len);
	}
	return(0);
}

// efetua a copia das strings em cada linha //

static char			**break_line(char const *s, char c, char **str, unsigned int l_line)
{
	unsigned int	ln;
	unsigned int	cl;
	unsigned int	i;

	ln = 0;
	i = 0;
	while (s[i] != '\0' && l_line > ln)
	{
		cl = 0;
		if(!(str[ln] = malloc(sizeof(char) * count_str(s, c, i) + 1)))
			return (NULL);
		while (s[i] == c && s[i] != '\0')
			i++;
		while (s[i] != c && s[i] != '\0')
			str[ln][cl++] = s[i++];
		str[ln][cl] = '\0';
		ln++;
	}
	str[ln] = 0;
	return (str);
}

char         	   **ft_split(char const *s, char c)
{
	char			**str;
	unsigned int	len;
	
	if (!s)
		return (NULL);
	len = count_c(s, c);
	if (!(str = malloc(sizeof(char *) * len + 1)))
		return (NULL);
	return (break_line(s, c, str, len));
}
