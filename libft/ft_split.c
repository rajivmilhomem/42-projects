/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtavares <rtavares@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 09:56:50 by rtavares          #+#    #+#             */
/*   Updated: 2020/03/10 18:47:29 by rtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

static int		ft_countstr(char const *s1, char c)
{
	int l;
	int i;

	l = 0;
	i = 0;
	while (s1[i] == c)
		i++;
	while (s1[i] != '\0')
	{
		if (s1[i] == c)
		{
			if (s1[i + 1] != c && s1[i + 1] != '\0')
				l++;
		}
		i++;
	}
	return(l + 1);
}

static int		ft_cn(char const *s, char c, int k)
{
	int	cn;

	cn = 0;
	while (s[k] != '\0' && s[k] != c)
	{
		k++;
		cn++;
	}
	return (cn);
}

static char		**ft_locline(char **str, char const *s, char c, int l)
{
	int		j;
	int		k;
	int		i;

	j = 0;
	k = 0;
	i = 0;
	while (s[k] != '\0' && l > 0)
	{
		str[j] = malloc(sizeof(char) * (ft_cn(s, c, k) + 1));
		while (s[k] != c)
			str[j][i++] = s[k++];
		str[j][i] = '\0';
		j++;
		k++;
		i = 0;
		l--;
	}
	str[j] = 0;
	puts(str[0]);
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		l;

	l = 0;
	l = (ft_countstr(s, c) + 1);
	str = malloc(sizeof(char *) * l);
	return (ft_locline(str, s, c, (l - 1)));
}




int main ()
{
	char	**imp;

	imp = ft_split("     fd dddfdfdf fd", ' ');
	return(0);
}