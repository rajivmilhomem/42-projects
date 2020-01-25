/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtavares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 14:21:06 by rtavares          #+#    #+#             */
/*   Updated: 2020/01/25 14:21:33 by rtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c) 
{
	int i;
	int ac;
	char *ptr;

	ptr = (char *)s;
	i = 0;
	ac = -1;
	while (ptr[i] != '\0')
	{
		if (ptr[i] == (char)c)
			ac = i;
		i++;
	}
	if (ac == -1)
		return (NULL);
	return (&ptr[ac]);
}
