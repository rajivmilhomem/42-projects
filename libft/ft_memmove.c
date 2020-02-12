/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtavares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 18:49:16 by rtavares          #+#    #+#             */
/*   Updated: 2020/02/22 19:20:00 by rtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dest;
	const char	*orig;
	size_t		i;

	dest = dst;
	orig = src;
	i = 0;
	if (dest > orig)
	{
		while (len--)
			dest[len] = orig[len];
	}
	else
	{
		while (i < len)
		{
			dest[i] = orig[i];
			i++;
		}
	}
	return (dst);
}
