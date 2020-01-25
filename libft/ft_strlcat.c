/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtavares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 14:16:35 by rtavares          #+#    #+#             */
/*   Updated: 2020/01/25 14:16:42 by rtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t		i;
	size_t		j;
	size_t		res;

	i = ft_strlen(dest);
	res = ft_strlen(src);
	j = 0;
	if (size == 0)
		return (res);
	if (size < i)
		res += size;
	else
		res += i;
	while (src[j] != '\0' && i < (size - 1) && dest != src)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (res);
}
