/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtavares <rtavares@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 20:30:10 by rtavares          #+#    #+#             */
/*   Updated: 2020/02/15 16:46:49 by rtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *s)
{
	char	*pt;

	if (!(pt = malloc((ft_strlen(s) + 1) * sizeof(char))))
		return (NULL);
	ft_strlcpy(pt, s, (ft_strlen(s) + 1));
	return (pt);
}
