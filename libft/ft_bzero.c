/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtavares <rtavares@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 21:12:41 by rtavares          #+#    #+#             */
/*   Updated: 2020/04/18 14:19:20 by rtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*pn;
	int		i;

	i = 0;
	pn = (char *)s;
	while (n-- > 0)
	{
		pn[i] = 0;
		i++;
	}
}
