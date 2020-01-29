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
	unsigned int		i;
	unsigned char		*dest;
	unsigned char		*orig;

	i = 0;
	dest = (unsigned char *)dst;
	orig = (unsigned char *)src;
	while (n > 0)
	{
		*dest = *orig;
		dest++;
		orig++;
		n--;
	}
	return (dst);
}
