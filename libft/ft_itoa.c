/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtavares <rtavares@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 20:42:48 by rtavares          #+#    #+#             */
/*   Updated: 2020/04/20 16:01:32 by rtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	long	nb;
	size_t	sz;

	nb = n;
	sz = n > 0 ? 0 : 1;
	nb = nb > 0 ? nb : -nb;
	while (n)
	{
		n /= 10;
		sz++;
	}
	if (!(str = (char *)malloc(sz + 1)))
		return (0);
	*(str + sz--) = '\0';
	while (nb > 0)
	{
		*(str + sz--) = nb % 10 + '0';
		nb /= 10;
	}
	if (sz == 0 && str[1] == '\0')
		*(str + sz) = '0';
	else if (sz == 0 && str[1] != '\0')
		*(str + sz) = '-';
	return (str);
}
