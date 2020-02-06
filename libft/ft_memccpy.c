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

void		*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*ptdst;
	unsigned char	*ptsrc;
	unsigned int	i;

	ptdst = (unsigned char *)dst;
	ptsrc = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		ptdst[i] = ptsrc[i];
		if (ptdst[i] == (char)c)
			return (&ptdst[i + 1]);
		i++;
	}
	return (NULL);
}
