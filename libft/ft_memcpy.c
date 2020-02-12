/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtavares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 21:49:16 by rtavares          #+#    #+#             */
/*   Updated: 2020/01/22 20:45:00 by rtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*dest;
	const char*orig;

	if (dst == NULL || src == NULL)
		return (NULL);
	dest = dst;
	orig = src;
	while (n > 0)
	{
		*dest = *orig;
		dest++;
		orig++;
		n--;
	}
	return (dst);
}
