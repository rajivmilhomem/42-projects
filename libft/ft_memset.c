/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtavares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 19:59:31 by rtavares          #+#    #+#             */
/*   Updated: 2020/01/21 21:10:36 by rtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*t;
	unsigned int	i;

	t = (unsigned char *)b;
	i = 0;
	while (t[i] != '\0' && i < len)
	{
		t[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
