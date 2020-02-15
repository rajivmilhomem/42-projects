/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtavares <rtavares@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 20:29:35 by rtavares          #+#    #+#             */
/*   Updated: 2020/02/15 17:30:30 by rtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*pnt;

	if (!(pnt = malloc(nmemb * size)))
		return (NULL);
	ft_memset(pnt, 0, (nmemb * size));
	return (pnt);
}
