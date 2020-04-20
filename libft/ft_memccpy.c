/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtavares <rtavares@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 20:45:17 by rtavares          #+#    #+#             */
/*   Updated: 2020/04/18 14:19:20 by rtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char		*ptdst;
	const char	*ptsrc;
	size_t		i;

	ptdst = dst;
	ptsrc = src;
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
