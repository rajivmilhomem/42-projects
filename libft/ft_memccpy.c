/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtavares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 20:45:17 by rtavares          #+#    #+#             */
/*   Updated: 2020/01/22 21:02:03 by rtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned int		i;
	unsigned char		*dest;
	unsigned char		*orig;

	i = 0;
	dest = (unsigned char *)dst;
	orig = (unsigned char *)src;
	while (n > 0 && (char)c != *dest)
	{
		*dest = *orig;
		dest++;
		orig++;
		n--;
	}
	return (dst);
}