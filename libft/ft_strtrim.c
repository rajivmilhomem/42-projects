/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtavares <rtavares@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 12:14:26 by rtavares          #+#    #+#             */
/*   Updated: 2020/03/01 17:50:11 by rtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	start(char const *s1, char const *set)
{
	size_t	i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (ft_strchr(set, s1[i]) == NULL)
			return (i);
		i++;
	}
	return (i);
}

static size_t	final(char const *s1, char const *set)
{
	size_t	i;

	i = ft_strlen(s1) - 1;
	while (s1[i] != '\0')
	{
		if (ft_strchr(set, s1[i]) == NULL)
			return (i);
		i--;
	}
	return (i + 1);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	size_t	ini;
	size_t	end;
	char	*new;

	if (!s1 || !set)
		return (NULL);
	ini = start(s1, set);
	end = final(s1, set);
	if ((ini + end) == ft_strlen(s1))
		return (ft_strdup(""));
	new = ft_substr(s1, ini, (((end + 1) - ini)));
	return (new);
}
