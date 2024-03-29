/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtavares <rtavares@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 17:32:46 by rtavares          #+#    #+#             */
/*   Updated: 2020/02/29 14:12:07 by rtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	cn;
	size_t	sz;
	char	*new;

	cn = 0;
	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	sz = ft_strlen(s + start);
	if (sz < len)
		len = sz;
	if (!(new = (char *)malloc((len + 1) * sizeof(char))))
		return (NULL);
	while (cn < len)
	{
		new[cn] = s[start + cn];
		cn++;
	}
	new[cn] = '\0';
	return (new);
}
