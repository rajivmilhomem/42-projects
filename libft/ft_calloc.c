/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtavares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 20:29:35 by rtavares          #+#    #+#             */
/*   Updated: 2020/02/05 20:29:45 by rtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*pnt;
	size_t	i;

	pnt = malloc(nmemb * size);
	i = 0;
	if (nmemb == 0 || size == 0)
		return (NULL);
	while (i < nmemb)
	{
		((char *)pnt)[i] = 0;
		i++;
	}
	return (pnt);
}
