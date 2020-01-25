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
	unsigned char	*optr;
	unsigned char	*dptr;
	char			a;
	int				i;

	optr = (unsigned char *)src;
	dptr = (unsigned char *)dst;
	a = (char)c;
	i = 0;
	while (n--)
	{
		if (a != optr[i])
		{
			dptr[i] = optr[i];
			i++;
			if (a == optr[i])
				dptr[i] = optr[i];
		}
	}
	return (dst);
}
