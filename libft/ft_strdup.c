/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtavares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 20:30:10 by rtavares          #+#    #+#             */
/*   Updated: 2020/02/11 20:30:23 by rtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *s)
{
	char	*pt;

	pt = malloc((ft_strlen(s) + 1) * sizeof(char));
	ft_strlcpy(pt, s, (ft_strlen(s) + 1));
	return (pt);
}
