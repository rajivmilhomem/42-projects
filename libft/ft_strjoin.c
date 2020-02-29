/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtavares <rtavares@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 12:54:04 by rtavares          #+#    #+#             */
/*   Updated: 2020/02/29 14:07:19 by rtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	size_t	tam;

	if (!s1 || !s2)
		return (NULL);
	tam = ((ft_strlen(s1) + 1) + (ft_strlen(s2) + 1));
	if (!(new = malloc(sizeof(char) * tam)))
		return (NULL);
	ft_strlcpy(new, s1, (ft_strlen(s1) + 1));
	ft_strlcpy(&new[ft_strlen(s1)], s2, (ft_strlen(s2) + 1));
	return (new);
}
